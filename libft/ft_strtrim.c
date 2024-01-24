/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:31:27 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/16 20:53:40 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		start;
	int		end;
	int		size;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) && end > start)
		end--;
	size = end - start + 1;
	new = malloc(sizeof (char) * (size + 1));
	if (!new)
		return (NULL);
	end = 0;
	while (end < size)
		new[end++] = s1[start++];
	new[end] = '\0';
	return (new);
}

/*#include <stdio.h>

int main(void)
{
	char set[] = "Aamnd";
	char s1[] = "A MAriana e linda";
	
	printf("set = %s\n", set);
	printf("string = %s\n", s1);
	printf("ft_strtrim = %s", ft_strtrim(s1, set));
}*/
