/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:08:25 by autku             #+#    #+#             */
/*   Updated: 2024/04/28 19:08:27 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	if (dest == NULL && src != NULL && size == 0)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	destlen = ft_strlen(dest);
	j = destlen;
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (srclen + size);
	while (src[i] && i < size - destlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destlen + srclen);
}
/*
int	main(int ac, char **av)
{
	unsigned int	size;

	if (ac != 4)
		return (-1);
	size = atoi(av[3]);
	printf("%d", ft_strlcat(av[1], av[2], size));
	return (0);
}*/
