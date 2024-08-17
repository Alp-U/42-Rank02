/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:47:59 by autku             #+#    #+#             */
/*   Updated: 2024/04/14 19:19:25 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < n)
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && (i + j) < n)
		{
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	if (ac != 4)
		return (-1);
	printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	return (0);
}*/
