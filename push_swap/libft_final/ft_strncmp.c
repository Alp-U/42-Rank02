/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:26:11 by autku             #+#    #+#             */
/*   Updated: 2024/04/14 19:05:53 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while (i < size && str1[i] != '\0' && str2[i] != '\0'
		&& str1[i] == str2[i])
		i++;
	if (i == size)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
int	main(int ac, char **av)
{
	int	mine;
	int	theirs;

	if (ac != 4)
		return (-1);
	mine = ft_strncmp(av[1], av[2], atoi(av[3]));
	theirs = strncmp(av[1], av[2], atoi(av[3]));
	printf("mine  : %d\ntheirs: %d", mine, theirs);
	return (0);
}*/
