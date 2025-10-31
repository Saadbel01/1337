/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelcadi <sbelcadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:10:50 by sbelcadi          #+#    #+#             */
/*   Updated: 2025/10/30 14:01:25 by sbelcadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_tab(char **tab, int j)
{
	int	k;

	k = 0;
	while (k < j)
		free(tab[k++]);
	free(tab);
}

static char	*alloc_str(char const	*str, int first, int last)
{
	char	*s;
	int		i;

	s = malloc(sizeof(char) * (last - first + 2));
	if (!s)
	{
		return (NULL);
	}
	i = 0;
	while (i < last - first + 1)
	{
		s[i] = str[first + i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

static int	count_word(char const	*str, char c)
{
	int	count;
	int	i;
	int	first_space;

	i = 0;
	first_space = 1;
	count = 0;
	while (str[i])
	{
		if (c == str[i])
		{
			first_space = 1;
		}
		else
		{
			if (first_space == 1)
			{
				first_space = 0;
				count++;
			}
		}
		i++;
	}
	return (count);
}

static int	fill_tab(char **tab, char const *str, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > start)
		{
			tab[j] = alloc_str(str, start, i - 1);
			if (!tab[j++])
				return (free_tab(tab, j - 1), 0);
		}
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;

	if (!str)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (!tab)
		return (NULL);
	if (!fill_tab(tab, str, c))
		return (NULL);
	return (tab);
}
