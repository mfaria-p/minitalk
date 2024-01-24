/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:41 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/04 12:20:16 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (1024 * ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)));
}

/*#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int c = 'c';
	printf("%i\n", ft_isalpha(c));
	printf("%i", isalpha(c));
}*/
