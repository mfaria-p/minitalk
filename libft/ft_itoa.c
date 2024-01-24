/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:20:20 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/20 11:48:23 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_result(char *result, int *size, int *n)
{
	while (*n > 9)
	{
		result[*size] = *n % 10 + '0';
		*n = *n / 10;
		(*size)--;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	char	*result;

	size = ft_size(n);
	result = (char *) malloc(sizeof (char) * size + 1);
	if (!result)
		return (NULL);
	result[size] = '\0';
	if (n == -2147483648)
	{
		result[0] = '-';
		result[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	size--;
	ft_result(result, &size, &n);
	result[size] = n % 10 + '0';
	return (result);
}

/*#include <stdio.h>

int main(void)
{
	int n1 = 27;
	int n2 = 0;
	int n3 = -2147483648;
	int n4 = -2147483647;

	printf("numero 1 = %i\n", n1);
	printf("ft_itoa = %s\n", (char *)ft_itoa(n1));
	printf("numero 2 = %i\n", n2);
        printf("ft_itoa = %s\n", ft_itoa(n2));
	printf("numero 3 = %i\n", n3);
        printf("ft_itoa = %s\n", ft_itoa(n3));
	printf("numero 4 = %i\n", n4);
        printf("ft_itoa = %s\n", ft_itoa(n4));
}*/
