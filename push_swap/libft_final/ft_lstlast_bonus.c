/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:51:08 by autku             #+#    #+#             */
/*   Updated: 2024/04/13 13:35:23 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
    int data1;
    int data2;
    t_list  *node1;
    t_list  *node2;
    t_list  *list;
	t_list	*last_node;
	t_list	*current;

    data1 = 5;
    data2 = 3;
    list = NULL;
    node1 = ft_lstnew(&data1);
    node2 = ft_lstnew(&data2);
    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);
	last_node = ft_lstlast(list);
	printf("%d\n", *((int *)last_node->content));
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
