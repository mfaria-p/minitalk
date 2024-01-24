/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:09:55 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/11 10:50:13 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int	a;
	int	b;

	a = 88;
	b = 40;
	printf("Char = %c\n", a);
	printf("ft_tolower = %c\n", ft_tolower(a));
	printf("Char = %c\n", a);
	printf("tolower = %c\n", tolower(a));
	printf("Char = %c\n", b);
	printf("ft_tolower = %c\n", ft_tolower(b));
	printf("Char = %c\n", b);
	printf("toupper = %c\n", tolower(b));
}*/
