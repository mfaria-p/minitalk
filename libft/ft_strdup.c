/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:42:55 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/13 11:53:34 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s, ft_strlen(s) + 1);
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char	src[] = "olaananas";

	printf("String: %s\n", src);
	printf("ft_strdup: %s\n", ft_strdup(src));
	printf("strdup: %s\n", strdup(src));
}*/
