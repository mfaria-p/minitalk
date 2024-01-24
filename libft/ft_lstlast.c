/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:59:43 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/21 14:55:39 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*#include <stdio.h>

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		ft_putstr_fd(list->content, 1);
		list = list->next;
	}
}

int main (void)
{
	t_list	*list;
	t_list	*str0;
	t_list	*str1;

	list = ft_lstnew("A Mariana ; ");
	str0 = ft_lstnew("Faria ; ");
	str1 = ft_lstnew("Pereira.");

	list->next = str0;
	str0->next = str1;

	printf("%s\n", "lista = ");
	print_list(list);
	write(1, "\n", 1);
	printf("content of the last node = %s ", (char *)(ft_lstlast(list)->content));
}*/
