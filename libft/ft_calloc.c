/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:03:38 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/13 11:39:48 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

/*#include <stdio.h>

int main(void)
{
	int n = 10;
	int i = 0;
	char *array = ft_calloc(n, 8);
	while (i < n)
	{
		printf("%p\n", &array[i]);
		i++;
	}
	free(array);
}*/
