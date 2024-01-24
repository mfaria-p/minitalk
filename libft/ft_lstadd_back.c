/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:44:05 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/21 15:31:32 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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
	t_list	*new;

	list = ft_lstnew("A Mariana ; ");
	str0 = ft_lstnew("Faria ; '");
	str1 = ft_lstnew("Pereira.  ");
	new = ft_lstnew("ela e mega incrivelll  ");

	list->next = str0;
	str0->next = str1;

	printf("%s\n", "lista inicial = ");
	print_list(list);
	write(1, "\n", 1);
	ft_lstadd_back( &list, new);
	printf("%s\n", "ft_lstadd_back = ");
	print_list(list);
}*/
