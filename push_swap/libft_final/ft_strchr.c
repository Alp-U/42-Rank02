/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:58:07 by autku             #+#    #+#             */
/*   Updated: 2024/04/16 20:52:00 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

/*
int	main(void)
{
	char	buf[] = "Hello, World!";
	char	*result;

	result = ft_strchr(buf, 'o');
	printf("mine: %ld\n", result - buf);

	// Comparing output with og function
	char	buf2[] = "Hello, World!";
	char	*result2;

	result2 = strchr(buf2, 'o');
	printf("  og: %ld\n", result2 - buf2);
	return (0);
}*/
