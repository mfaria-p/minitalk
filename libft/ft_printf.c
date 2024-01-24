/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:05:04 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/31 12:12:38 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_format(char specifier, va_list ap)
{
	int	c;

	if (specifier == 'c')
	{
		c = va_arg(ap, int);
		return (write(1, &c, 1));
	}
	if (specifier == 's')
		return (print_string((char *)(va_arg(ap, char *))));
	if (specifier == 'd' || specifier == 'i')
		return (print_digit((long)(va_arg(ap, int)), "0123456789"));
	if (specifier == 'u')
		return (print_digit((long)(va_arg(ap, unsigned int)), "0123456789"));
	if (specifier == 'x')
		return (print_digit((long)(va_arg(ap, unsigned int)),
			"0123456789abcdef"));
	if (specifier == 'X')
		return (print_digit((long)(va_arg(ap, unsigned int)),
			"0123456789ABCDEF"));
	if (specifier == 'p')
		return (print_pointer((unsigned long long int)(va_arg(ap, void *))));
	return (write(1, &specifier, 1));
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
			count += print_format(format[++i], ap);
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}
