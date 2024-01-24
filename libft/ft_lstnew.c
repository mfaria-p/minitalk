/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:20:34 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/21 13:01:26 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof (t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*#include <stdio.h>

int main(void)
{
	char str[] = "A MAriana e linda";
	t_list *str2;

	printf("string = %s\n", str);
	str2 = ft_lstnew((void *)str);
	printf("ft_lstnew = %s", (char *)str2->content);
}*/
