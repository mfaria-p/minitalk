/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:59:47 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/11 10:54:04 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int	a;
	int	b;

	a = 110;
	b = 40;
	printf("Char = %c\n", a);
	printf("ft_toupper = %c\n", ft_toupper(a));
	printf("Char = %c\n", a);
	printf("toupper = %c\n", toupper(a));
	printf("Char = %c\n", b);
	printf("ft_toupper = %c\n", ft_toupper(b));
	printf("Char = %c\n", b);
	printf("toupper = %c\n", toupper(b));
}*/
