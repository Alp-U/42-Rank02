/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:54:26 by autku             #+#    #+#             */
/*   Updated: 2024/04/02 14:54:31 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	print(unsigned int index, char *c)
{
	printf("%d:%c\n", index, *c);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, (s + i));
			i++;
		}
	}
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	ft_striteri(av[1], print);
	return (0);
}*/
