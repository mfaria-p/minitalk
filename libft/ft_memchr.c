/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:09:50 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/13 10:15:53 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "Mariana";
	char c = 'r';

	printf("string1 = %s\n", str1);
	printf("char = %c\n", c);
	printf("ft_memchr = %s\n",(char *)ft_memchr(str1, c, 10));
	printf("memchr = %s\n",(char *)memchr(str1, c, 10));
}*/
