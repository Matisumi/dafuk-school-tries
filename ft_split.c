/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:29:27 by savitull          #+#    #+#             */
/*   Updated: 2020/07/01 10:59:23 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	unsigned int	i;
	int 			tot;

	i = 0;
	tot = 0;

	while(s[i])
	{
		if(s[i] == c)
		{
			tot++;
			while(s[i] == c)
				i++;
		}
		i++;
	}
	return(tot)
}

char	**ft_split(char const *s, char c)
{
	unsigned int 	i;
	unsigned int	end
	int 			count;
	char			**tab;

	i = 0;
	count = ft_count(s, c);

	if(!(tab = (char**)malloc(sizeof(char *) * count + 1)))
		return(NULL);
	tab[count] = 0;
	
}