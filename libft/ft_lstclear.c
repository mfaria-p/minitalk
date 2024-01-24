/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:15:33 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/21 16:19:31 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		*lst = temp;
	}
	*lst = NULL;
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

void	ft_delete(void *data)
{
	if (data != NULL)
		free (data);
}

int main (void)
{
	t_list	*list;
	t_list	*str0;
	t_list	*str1;

	list = ft_lstnew("A Mariana ; ");
	str0 = ft_lstnew("Faria ; '");
	str1 = ft_lstnew("Pereira.  ");

	list->next = str0;
	str0->next = str1;

	printf("%s\n", "lista inicial = ");
	print_list(list);
	write(1, "\n", 1);
	ft_lstclear(&list,ft_delete(list);
	printf("%s\n", "after ft_lstclear = ");
	print_list(list);
}*/
