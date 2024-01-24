/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:16:33 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/20 11:40:52 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (16384 * (c >= 32 && c <= 126));
}

/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c = 3;
	
	printf("%i\n", ft_isprint(c));
	printf("%i", isprint(c));
}*/
