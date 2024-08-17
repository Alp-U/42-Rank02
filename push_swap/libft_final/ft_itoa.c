/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:18:31 by autku             #+#    #+#             */
/*   Updated: 2024/04/21 16:52:32 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*alloc_mem(int digits)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	return (str);
}

static	char	*min_int(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (12));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, "-2147483648");
	return (str);
}

static	int	get_digits(int n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		sign;
	char	*str;

	sign = 0;
	if (n == -2147483648)
		return (min_int());
	if (n < 0)
	{
		n *= -1;
		sign++;
	}
	digits = get_digits(n) + sign;
	str = alloc_mem(digits);
	if (!str)
		return (NULL);
	while (digits > sign)
	{
		digits--;
		str[digits] = (n % 10) + 48;
		n = n / 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	int		n;
	char	*str;

	n = -2147483648;
	str = ft_itoa(n);
	printf("digit: %d |string: %s\n", n, str);
	free(str);
	return (0);
}*/
