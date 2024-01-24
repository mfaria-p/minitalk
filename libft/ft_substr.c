/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:35:45 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/16 20:25:56 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = (size_t) start;
	j = 0;
	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	while (s[i] && j < len)
	{
		i++;
		j++;
	}
	str = malloc(sizeof (char) * (j + 1));
	if (!str || !s)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s) && (len-- > 0))
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	char str[] = "A MARIANA E linda";
	int start = 3;
	int len = 10;

	printf("start = %i\n", start);
	printf("len = %i\n", len);
	printf("string inicial = %s\n", str);
	printf("string final = %s\n", ft_substr(str, start, len));
}*/
