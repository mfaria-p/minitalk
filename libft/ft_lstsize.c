/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <mfaria-p@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:46:31 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/10/21 13:56:34 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
	str0 = ft_lstnew("Faria ; '");
	str1 = ft_lstnew("Pereira.");

	list->next = str0;
	str0->next = str1;

	write(1, "lista = ", 8);
	print_list(list);
	write(1, "\n", 1);
	printf("Number of nodes = %d\n", ft_lstsize(list));
}*/
