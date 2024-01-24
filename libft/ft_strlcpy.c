/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:14:06 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/09 10:58:20 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = 0;
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && (i + 1) < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[l] != '\0')
		l++;
	return (l);
}

/*int main(void)
{
	char	src[] = "olaananas";
	char	dest[4];
	unsigned int size;

	size = 0;
	printf("return , ft_strlcpy: %d", ft_strlcpy(dest, src, size));
	printf("Destination: %s", dest);
}*/
