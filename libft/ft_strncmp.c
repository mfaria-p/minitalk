/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:30:06 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/11 11:20:46 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && ((i + 1) <= n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "Mariana";
	char str2[] = "Pereira";

	printf("string1 = %s\n", str1);
	printf("string1 = %s\n", str2);
	printf("ft_strncmp = %d\n",ft_strncmp(str1,str2,0));
	printf("strncmp = %d\n",strncmp(str1,str2,0));
}*/
