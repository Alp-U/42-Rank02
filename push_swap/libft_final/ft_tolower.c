/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:28:28 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 15:28:30 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	mystring[] = "HELLo";
	int	i;

	i = 0;
	while (mystring[i] != '\0')
	{
		mystring[i] = ft_tolower(mystring[i]);
		i++;
	}
	printf("%s\n", mystring);
	return (0);
}*/
