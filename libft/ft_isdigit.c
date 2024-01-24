/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:24:21 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/04 12:20:39 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (2048 * (c >= 48 && c <= 57));
}

/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int c = '7';
	printf("%i\n", ft_isdigit(c));
	printf("%i", isdigit(c));
}*/
