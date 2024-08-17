/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:03:04 by autku             #+#    #+#             */
/*   Updated: 2024/04/16 21:17:13 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (n == 0 || dest == src)
		return (dest);
	if (dest > src)
	{
		while (0 < n--)
			a[n] = b[n];
	}
	else
	{
		while (0 < n--)
			*a++ = *b++;
	}
	return (dest);
}

/*
int main(void)
{
    char buf[0xff] = "Hello, World!";

    ft_memmove(buf, buf + 7, sizeof(buf) - 7);
    printf("%s\n", buf);
    return (0);
}*/
