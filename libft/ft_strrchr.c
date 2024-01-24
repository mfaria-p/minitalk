/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:46:43 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/13 10:16:56 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{	
	char	str1[] = "Olananas";
	char    str2[] = "Olananas";
	int	a = 110;

	printf("char = %c\n", a);
	printf("ft_strrchr = %s\n", ft_strrchr(str1, a));
	printf("strrchr = %s\n", strrchr(str2, a));
}*/
