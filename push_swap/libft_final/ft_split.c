/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:15:00 by autku             #+#    #+#             */
/*   Updated: 2024/04/17 18:34:57 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_arr(char **ptr, int i)
{
	while (i >= 0)
	{
		free(ptr[i]);
		i--;
	}
	free(ptr);
	return (NULL);
}

static int	get_word_number(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	if (s[0] == '\0')
		return (0);
	count = 0;
	if (s[0] != c && s[0] != '\0')
		count++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static	int	get_word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		word_number;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	word_number = get_word_number(s, c);
	tab = (char **)malloc(sizeof(char *) * (word_number + 1));
	if (tab == NULL)
		return (NULL);
	while (++i < word_number)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		tab[i] = ft_substr(s, j, get_word_len(s + j, c));
		if (!tab[i])
			return (free_arr(tab, i));
		tab[i][get_word_len(s + j, c)] = '\0';
		j += get_word_len(s + j, c);
	}
	tab[i] = NULL;
	return (tab);
}

/*
char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		word_number;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s || !c)
		return (NULL);
	word_number = get_word_number(s, c);
	tab = (char **)malloc(sizeof(char *) * (word_number + 1));
	if (tab == NULL)
		return (NULL);
	while (++i < word_number)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		tab[i] = ft_substr(s, j, get_word_len(s + j, c));
		if (!tab[i])
			return (free_arr(tab, i));
		while (s[j] != '\0' && s[j] != c)
			j++;
	}
	tab[i] = '\0';
	return (tab);
}*/
/*
int	main(int ac, char **av)
{
	int		i;
	char	**result;

	i = 0;
	if (ac != 3)
		return (1);
	result = ft_split(av[1], av[2][0]);
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
/*
int	main(void)
{
	int		i;
	char	**result;

	i = 0;
	printf("01\n");
	result = ft_split("nonempty", '\0');
	printf("02\n");
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
