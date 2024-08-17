/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:48:21 by autku             #+#    #+#             */
/*   Updated: 2024/04/14 18:49:57 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	buf[] = "Hello, World!";
	char	*result;

	printf("\nTest case 1:\n");
	result = ft_strrchr(buf, 'o');
	printf("mine: %s\n", result);
	result = strrchr(buf, 'o');
	printf("  og: %s\n\n", result);
	
	printf("Test case 2:\n");
	result = ft_strrchr(buf, 'g');
	printf("mine: %s\n", result);
	result = strrchr(buf, 'g');
	printf("  og: %s\n\n", result);
	
	printf("Test case 3:\n");
	result = ft_strrchr(buf, 'l');
	printf("mine: %s\n", result);
	result = strrchr(buf, 'l');
	printf("  og: %s\n\n", result);
	
	return (0);
}*/
