/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alp <alp@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:40:03 by autku             #+#    #+#             */
/*   Updated: 2024/08/17 15:50:13 by alp              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	if (!content)
		return (NULL);
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (free(node), NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int	main(void)
{
	int data;

	data = 42;
	printf("%d", *(int *)(ft_lstnew(&data)->content));
	return (0);
}*/
