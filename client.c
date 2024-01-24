/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:16:57 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/01/22 17:17:03 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_signal(int pid, unsigned char octet)
{
	int				i;
	unsigned char	octet_tmp;

	octet_tmp = octet;
	i = 8;
	while (i--)
	{
		octet_tmp = octet >> i;
		if (octet_tmp % 2 == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(WAIT_TIME);
	}
}

static int	ft_found_errors_in_main(int argc, char **argv)
{
	int	i;

	if (argc != 3)
		return (1);
	i = 0;
	while (argv[1][i])
	{
		if (ft_strchr("0123456789", argv[1][i]) == NULL)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		client_id;
	char	*str_to_send;
	int		i;

	if (ft_found_errors_in_main(argc, argv))
		return (-1);
	client_id = ft_atoi(argv[1]);
	str_to_send = argv[2];
	i = 0;
	send_signal(client_id, '\n');
	while (str_to_send[i])
	{
		send_signal(client_id, (unsigned char)str_to_send[i]);
		i++;
	}
}
