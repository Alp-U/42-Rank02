/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:05:56 by autku             #+#    #+#             */
/*   Updated: 2024/04/13 13:35:48 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int	i;

	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}
/*
int main(void)
{
    int data1;
    int data2;
    t_list  *node1;
    t_list  *node2;
    t_list  *list;
    t_list  *current;

    data1 = 5;
    data2 = 3;
    list = NULL;
    node1 = ft_lstnew(&data1);
    node2 = ft_lstnew(&data2);
    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);
    current = list;
	printf("%d\n", ft_lstsize(current));
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
