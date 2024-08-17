/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:19:27 by autku             #+#    #+#             */
/*   Updated: 2024/04/21 17:57:01 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	int	data1;
	int data2;
	t_list	*node1;
	t_list	*node2;
	t_list	*list;
	t_list	*current;

	data1 = 5;
	data2 = 3;
	list = NULL;
	node1 = ft_lstnew(&data1);
	node2 = ft_lstnew(&data2);
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	current = list;
	while (current)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
	 // Cleaning up:
    current = list;
    while (current)
    {
        tmp = current;
        current = current->next;
        free(tmp);
    }
	return (0);
}*/
