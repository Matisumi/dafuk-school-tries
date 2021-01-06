/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:29:27 by savitull          #+#    #+#             */
/*   Updated: 2021/01/06 10:08:43 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wc(char const *s, char c)
{
	int tot;
	int	i;

	tot = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			tot++;
		i++;
	}
	return (tot);
}

static void	ft_freetab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	x;
	size_t	start;

	i = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char*) * (ft_wc(s, c) + 1))))
		return (NULL);
	x = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || (s[i - 1] == c)))
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			(tab[x] = ft_substr(s, start, (i - start))) ? x++ : ft_freetab(tab);
			if (!tab)
				break ;
		}
		else
			i++;
	}
	tab[x] = 0;
	return (tab);
}
