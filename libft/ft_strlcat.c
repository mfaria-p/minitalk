/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:23:30 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/11 10:36:53 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	i = 0;
	s = 0;
	d = 0;
	while (dst[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	if (size <= d)
		return (s + size);
	else
	{
		while ((src[i] != '\0') && (i < (size - d - 1)))
		{
			dst[d + i] = src[i];
			i++;
		}
		dst[d + i] = '\0';
		return (s + d);
	}
}

/*#include <stdio.h>

int main(void)
{
	char	dest1[18] = "A Mariana e";
	char	src1[] = " doidasergawf";
	int	size = 0;

	printf("Return, ft_strlcat: %zu\n", ft_strlcat(dest1, src1, size));
	printf("Source1: %s\n",src1);
	printf("Destination1: %s\n",dest1);
}*/
