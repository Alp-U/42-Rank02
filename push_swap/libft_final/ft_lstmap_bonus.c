/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:16:24 by autku             #+#    #+#             */
/*   Updated: 2024/04/21 17:40:45 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	delete_int(void *data)
{
	free(data);
}

void	*addone(void *data)
{
	(*(int *)data)++;
	return (data);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;
	void	*set;

	if (!del || !f || !lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		set = (*f)(lst->content);
		if (!set)
			return (ft_lstclear(&new_lst, del), NULL);
		node = ft_lstnew(set);
		if (!node)
		{
			del(set);
			return (ft_lstclear(&new_lst, del), NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
int	main(void)
{
	int		data[] = {1, 2, 3};
	t_list	*lst;
	t_list	*current;
	t_list	*temp;
	t_list	*new_lst;
	size_t	i;

	lst = NULL;
	i = 0;
	while (i < sizeof(data) / sizeof(data[0]))
	{
        t_list *node = ft_lstnew(&data[i]);
        ft_lstadd_back(&lst, node);
		i++;
    }	

    current = lst;
	printf("The list of integers: ");
	while (current)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
	printf("\n");
	new_lst = ft_lstmap(lst, addone, delete_int);
	current = new_lst;
	printf("The new list of integers: ");
	while (current)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
	printf("\n");
	//Cleaning up
	current = new_lst;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	return (0);
}*/
