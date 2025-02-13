/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:18:10 by mfaria-p          #+#    #+#             */
/*   Updated: 2025/02/13 17:53:54 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_signal(int signal)
{
	static unsigned char	current_char;
	static int				bit_index;

	if (signal == SIGUSR1 || signal == SIGUSR2)
	{
		current_char |= (signal == SIGUSR1);
		bit_index++;
		if (bit_index == 8)
		{
			ft_printf("%c", current_char);
			bit_index = 0;
			current_char = 0;
		}
		else
			current_char <<= 1;
	}
	else
		ft_printf("Unexpected signal received: %d\n", signal);
}

void	set_sigaction(void)
{
	struct sigaction	serv_act;

	serv_act.sa_handler = &handle_signal;
	serv_act.sa_flags = 0;
	sigemptyset(&serv_act.sa_mask);
	if (sigaction(SIGUSR1, &serv_act, NULL) == -1)
		exit(EXIT_FAILURE);
	if (sigaction(SIGUSR2, &serv_act, NULL) == -1)
		exit(EXIT_FAILURE);
}

int	main(void)
{
	ft_printf("ID: %d", getpid());
	set_sigaction();
	while (1)
		pause ();
	return (0);
}
