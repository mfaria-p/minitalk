/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:03:24 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/21 13:57:39 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*primeiro tem ue se por o next do new a apontar para alguma coisa,
  aka passa a ser o ponteiro que leva ao primeiro node da list
  dps e que se pode meter o ponteiro do ponteiro que leva ao
  node inicial cm ponteiro new
  pk agr o new ja esta ligado aos proximos nodes*/

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
	str1 = ft_lstnew("Pereira.");
	new = ft_lstnew("Quem e que e mega incrivel?  ");

	list->next = str0;
	str0->next = str1;
	
	printf("%s\n", "lista inicial = ");
	print_list(list);
	write(1, "\n", 1);
	ft_lstadd_front( &list, new);
	printf("%s\n", "ft_lstadd_front = ");
	print_list(list);
}*/
