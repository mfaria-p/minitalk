/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:01:11 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/13 10:08:10 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int c = 'c';
	printf("%i\n", ft_isascii(c));
	printf("%i", isascii(c));
}*/
