/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:08:21 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/11 10:48:57 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!d && !s)
		return (NULL);
	if (src < dest)
		while (n--)
			d[n] = s[n];
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[7] = "aabbcc";
	char str2[7] = "aabbcc";
	char str3[7] = "aabbcc";
	char str4[7] = "aabbcc";

	printf(" The string: %s\n", str1);
	memcpy( str1 + 2, str1, 4 );
	ft_memcpy(str2 + 2, str2, 4);
	printf( "New string, memcpy: %s\n", str1 );
	printf( "New string, ft_memcpy: %s\n", str2 );
	printf( "The string: %s\n", str3 );
	memmove( str3 + 2, str3, 4 );
	ft_memmove(str4 + 2, str4, 4);
	printf( "New string, memmove: %s\n", str3 );
	printf( "New string, ft_memmove: %s\n", str4 );
}*/
