/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:18:57 by autku             #+#    #+#             */
/*   Updated: 2024/04/14 19:14:44 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*buf;
	size_t					i;

	buf = s;
	i = 0;
	while (i < n)
	{
		if (buf[i] == (unsigned char)c)
			return ((void *)buf + i);
		else
			i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	buf[] = "Hello, World!";
	char	*result;

	result = ft_memchr(buf, 'o', sizeof(char) * 5);
	printf("mine: %ld\n", result - buf);

	// Comparing output with og function
	char	buf2[] = "Hello, World!";
	char	*result2;

	result2 = memchr(buf2, 'o', sizeof(char) * 5);
	printf("  og: %ld\n", result2 - buf2);
	return (0);
}
*/
