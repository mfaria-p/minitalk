/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:49:13 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/16 20:06:57 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;
	size_t	lentotal;

	i = 0;
	j = 0;
	lentotal = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * (lentotal +1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i + j] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/*#include <stdio.h>

int main(void)
{
	char s1[] = "a MAriana e ";
	char s2[] = "mega ultra LInda";

	printf("string 1 = %s\n", s1);
	printf("string 2 = %s\n", s2);
	printf("ft_strjoin = %s", ft_strjoin(s1, s2));
}*/
