/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:27:31 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/25 11:35:12 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_digit(long n, char *base)
{
	int	count;
	int	size;

	size = ft_strlen(base);
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base) + 1);
	}
	if (n < size)
		return (write(1, &(base[n]), 1));
	count = print_digit(n / size, base);
	return (count + print_digit(n % size, base));
}
