/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:05:52 by autku             #+#    #+#             */
/*   Updated: 2024/04/21 17:54:21 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}
/*
int main(void)
{
    int	data = 2;
    int	data_first = 1;
	int	data_last = 3;
	t_list	*node_first;
	t_list	*node_last;
	t_list	*list;
	t_list	*current;
	t_list	*tmp;

	list = ft_lstnew(&data);
	node_first = ft_lstnew(&data_first);
	ft_lstadd_front(&list, node_first);
	node_last = ft_lstnew(&data_last);
    ft_lstadd_back(&list, node_last);

    // Printing 
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
    return 0;
}*/
