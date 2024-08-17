/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:40:10 by autku             #+#    #+#             */
/*   Updated: 2024/04/16 16:46:27 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*newstr;
	int			pst;
	int			end;
	int			i;

	pst = 0;
	i = 0;
	while (s1[pst] && check_set(s1[pst], set))
		pst++;
	end = ft_strlen(s1) - 1;
	while (end > pst && check_set(s1[end], set))
		end--;
	newstr = (char *)malloc(end - pst + 2);
	if (newstr == NULL)
		return (NULL);
	while (pst <= end)
	{
		newstr[i] = s1[pst];
		pst++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
