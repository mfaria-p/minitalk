/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:35:32 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/11 11:58:59 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "Mariana";
	char str2[] = "Pereira";
	size_t	n = 2;

	printf("string1 = %s\n", str1);
	printf("string1 = %s\n", str2);
	printf("ft_memcmp = %d\n",ft_memcmp(str1,str2,n));
	printf("memcmp = %d\n",memcmp(str1,str2,n));
}
*/
