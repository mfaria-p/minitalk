/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:56:57 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/20 12:13:22 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void my_f(unsigned int i, char *c)
{
	if (*c == 'a')
		*c = 'e';
}

int main(void)
{
	char str[] = "banana";
	printf("the string is %s\n", str);
	ft_striteri(str, my_f);
	printf("the result is %s", str);
}*/
