/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:20:59 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/20 11:40:32 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;
	char	*str;

	i = 0;
	str = (char *) big;
	if (ft_strlen(little) > 0)
	{
		while (str[i] != '\0' && i < len)
		{
			l = 0;
			while (str[i + l] == little[l] && (i + l) < len)
			{
				if (little[l + 1] == '\0')
					return ((char *)(&str[i]));
				l++;
			}
			i++;
		}
		return (NULL);
	}
	else
		return ((char *)(&str[0]));
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str[] = "A Mariana ee linda";
	char	to_find1[] = "e l";
	char    to_find2[] = "";
	char    to_find3[] = "cenas";

	printf("String = %s\n", str);
	printf("to find, 1 = %s\n", to_find1);
	printf("ft_strnstr = %s\n", ft_strnstr(str, to_find1, 16));
	printf("strnstr = %s\n", strnstr(str, to_find1, 16));
        printf("to find, 2 = %s\n", to_find2);
        printf("ft_strnstr = %s\n", ft_strnstr(str, to_find2, 16));
        printf("strnstr = %s\n", strnstr(str, to_find2, 16));
        printf("to find, 3 = %s\n", to_find3);
        printf("ft_strnstr = %s\n", ft_strnstr(str, to_find3, 16));
        printf("strnstr = %s\n", strnstr(str, to_find3, 16));
	return (0);
}*/
