/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:29:27 by savitull          #+#    #+#             */
/*   Updated: 2020/07/09 16:24:30 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	unsigned int	i;
	int				tot;

	i = 0;
	tot = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			tot++;
			while (s[i] == c)
				i++;
		}
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
	unsigned int	i;
	unsigned int	len;
	int				x;
	char			**tab;

	i = 0;
	if (!s || !(tab = (char**)malloc(sizeof(char *) * ft_count(s, c) + 1)))
		return (NULL);
	x = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = i;
			while (s[len] && s[len] != c)
				len++;
			(tab[x] = ft_substr(s, i, len - i)) ? x++ : ft_freetab(tab);
			i = len;
		}
		else
			i++;
	}
	if (tab)
		tab[x] = 0;
	return (tab);
}
