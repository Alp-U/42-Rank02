/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alp <alp@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:17:25 by autku             #+#    #+#             */
/*   Updated: 2024/08/17 16:40:05 by alp              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_of(long res, int num, int sign)
{
	if (sign == 1)
	{
		if (res > (LONG_MAX - num) / 10)
			return (-1);
	}
	else
	{
		if (-res < (LONG_MIN + num) / 10)
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;
	int		of;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		of = check_of(result, str[i] - 48, sign);
		if (of != 1)
			return (of);
		result = result * 10 + str[i] - 48;
		i++;
	}
	return ((int)result * sign);
}
/*
int	main(int ac, char **av)
{
	int	mine;
	int	theirs;

	if (ac != 2)
		return (-1);
	mine = ft_atoi(av[1]);
	theirs = atoi(av[1]);
	printf("mine  : %d\ntheirs: %d", mine, theirs);
	return (0);
}*/
