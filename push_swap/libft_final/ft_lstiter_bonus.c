/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:55:24 by autku             #+#    #+#             */
/*   Updated: 2024/04/14 16:15:23 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}
/*
void	addone(void *data)
{
	(*(int *)data)++;
}*/

/*
int	main(void)
{
	int	data1 = 1;
	int	data2 = 2;
	t_list	*node2;
	t_list	*lst;
	t_list	*current;
	t_list	*temp;

	lst = ft_lstnew(&data1);
	node2 = ft_lstnew(&data2);
	ft_lstadd_back(&lst, node2);
	current = lst;
	printf("The original list of integers: ");
	while (current)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
	printf("\n");
	ft_lstiter(lst, addone);
	current = lst;
	printf("The edited list of integers: ");
	while (current)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
	printf("\n");
	//Cleaning up
	current = lst;
	while (current)
	{
		temp = current;
		current = current->next;
		free (temp);
	}
	return (0);
}*/
