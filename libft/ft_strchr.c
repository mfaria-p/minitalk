/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:21:31 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/13 10:20:36 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	i = 0;
	while (s[i] != (unsigned char) c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return (&str[i]);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{	
	char	str1[] = "Olananas";
	char    str2[] = "Olananas";
	int	a = -110;

	printf("char = %c\n", a);
	printf("ft_strchr = %s\n", ft_strchr(str1, a));
	printf("strchr = %s\n", strchr(str2, a));
}*/
