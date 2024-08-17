/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alp <alp@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:42:31 by autku             #+#    #+#             */
/*   Updated: 2024/08/15 17:21:53 by alp              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	fin;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	fin = 0;
	if (start < slen)
		fin = slen - start;
	if (fin > len)
		fin = len;
	str = (char *)malloc(sizeof(char) * (fin + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, fin + 1);
	return (str);
}
/*
int	main(void)
{
    char	*str;

	str = ft_substr("hola", 0, 184467440735);
	if (!str)
		return (1);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
