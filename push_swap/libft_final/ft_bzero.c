/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:17:32 by autku             #+#    #+#             */
/*   Updated: 2024/04/21 18:28:16 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main(int ac, char **av)
{
	size_t	count;
	
	count = atoi(av[2]);
	if (ac != 3)
		return (-1);
	ft_bzero(av[1], count);
	printf("output: %s\n", av[1]);
	return (0);
}*/
