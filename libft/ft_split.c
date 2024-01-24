/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:58:39 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/21 17:28:06 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_for_separator(const char str, char c)
{
	if (str == '\0')
		return (1);
	else if (c == str)
		return (1);
	else
		return (0);
}

static int	number_words(const char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (check_for_separator(str[i], c) == 0
			&& check_for_separator(str[i + 1], c) == 1)
			words++;
		i++;
	}
	return (words);
}

static void	write_word(int words, const char *str, char c, char **array)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && j < words)
	{
		len = 0;
		while (check_for_separator(str[i], c) == 1)
			i++;
		while (check_for_separator(str[i], c) == 0)
		{
			len++;
			i++;
		}
		array[j] = (char *) malloc(sizeof (char) * (len + 1));
		if (!(array[j]))
			array[j] = NULL;
		j++;
	}
}

static void	write_word2(int words, const char *str, char c, char **array)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && j < words)
	{
		len = 0;
		while (check_for_separator(str[i], c) == 1)
			i++;
		while (check_for_separator(str[i], c) == 0)
		{
			array[j][len] = str[i];
			len++;
			i++;
		}
		array[j][len] = '\0';
		j++;
	}
	array[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**array;

	words = number_words(s, c);
	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (!array)
	{
		return (NULL);
	}
	write_word(words, s, c, array);
	write_word2(words, s, c, array);
	return (array);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = "hello!zzzzzzzzzzzzzzzzzzz";
	char c = 'z';
	char **array;
	int	i = 0;
	int	nwords = number_words(s, c);

	array = ft_split(s, c);
	while (i <= nwords + 2)
	{
		printf("%s\n", array[i]);
       		i++;	
	}
	//printf("%s\n", array[nwords]);
}*/
