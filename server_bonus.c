/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:18:49 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/01/22 17:19:20 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_signal(int signal, siginfo_t *info, void *context)
{
	static unsigned char	current_char;
	static int				bit_index;

	(void)context;
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
	if (signal == SIGUSR1)
		kill(info->si_pid, SIGUSR1);
	else if (signal == SIGUSR2)
		kill(info->si_pid, SIGUSR2);
}

void	set_sigaction(void)
{
	struct sigaction	serv_act;

	serv_act.sa_sigaction = &handle_signal;
	serv_act.sa_flags = SA_SIGINFO;
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
