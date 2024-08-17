/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:27:33 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 13:27:35 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	buffer[3];

	ft_memset(buffer, 3, sizeof(buffer));
	printf("mine  : ");
	for (size_t i = 0; i < sizeof(buffer); i++)
		printf("%d ", buffer[i]);
	printf("\n");
	memset(buffer, 3, sizeof(buffer));
	printf("theirs: ");
	for (size_t i = 0; i < sizeof(buffer); i++)
		printf("%d ", buffer[i]);
	printf("\n");
	return (0);
}*/
