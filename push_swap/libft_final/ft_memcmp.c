/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:19:36 by autku             #+#    #+#             */
/*   Updated: 2024/04/16 20:25:36 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*b1;
	const unsigned char	*b2;
	size_t				i;

	b1 = (const unsigned char *)s1;
	b2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (b1[i] != b2[i])
			return ((int)(b1[i] - b2[i]));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "salut";
	char	str2[] = "salut";

	printf("mine: %d\n", ft_memcmp(str, str2, 5));
	printf("  og: %d\n", memcmp(str, str2, 5));
	return (0);
}*/
