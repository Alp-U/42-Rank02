/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:59:33 by autku             #+#    #+#             */
/*   Updated: 2024/04/27 15:28:41 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dupstr;
	int		i;

	i = 0;
	dupstr = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!dupstr)
		return (NULL);
	while (str[i])
	{
		dupstr[i] = str[i];
		i++;
	}
	dupstr[i] = '\0';
	return (dupstr);
}
/*
int	main(int ac, char **av)
{
	char	*mine;
	char	*theirs;

	if (ac != 2)
		return (-1);
	mine = ft_strdup(av[1]);
	theirs = strdup(av[1]);
	printf("mine  : %s|\ntheirs: %s|\n", mine, theirs);
	free(mine);
	free(theirs);
	return (0);
}*/
