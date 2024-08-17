/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alp <alp@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:07:30 by autku             #+#    #+#             */
/*   Updated: 2024/08/17 15:56:07 by alp              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	delete_int(void *data)
{
	free(data);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
        del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
    *lst = NULL;
}
/*
int main(void)
{
    int data = 2;
    int data_first = 1;
    int data_last = 3;
    t_list  *node_first;
    t_list  *node_last;
    t_list  *list;
    t_list  *current;

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
	printf("\n");

	ft_lstclear(&list, delete_int);
	printf("List after clearing: ");
	if (list == NULL)
		printf("List is EMPTY.\n");
	else
		printf("List is not empty after clearing.\n");
	return (0);
}*/
