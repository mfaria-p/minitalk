/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:59:28 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/06 10:41:01 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>

int main(void)
{
	int c;
	size_t n;
	char str[] = "cenandsafiwhidas";

	c = 'a';
	n = 9;
	printf("%s", (char *)ft_memset(str, c, n));
}*/
