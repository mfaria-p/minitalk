/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:08:33 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/31 11:59:40 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	point_recursive(unsigned long long int p)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (p < 16)
		return (write(1, &(base[p]), 1));
	else
	{
		count += point_recursive(p / 16);
		count += point_recursive(p % 16);
	}
	return (count);
}

int	print_pointer(unsigned long long int p)
{
	if (!p)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (point_recursive(p) + 2);
}
