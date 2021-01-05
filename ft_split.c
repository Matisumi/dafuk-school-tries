/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:29:27 by savitull          #+#    #+#             */
/*   Updated: 2021/01/05 17:50:37 by savitull         ###   ########.fr       */
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

/*static void	ft_freetab(char **tab)
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
}*/

/*char **ft_split(char const *s, char c)
{
unsigned int i;
int x;
char **tab;
int word_start = 0;

i = 0;
if (!s || !(tab = (char**)malloc(sizeof(char *) * ft_count(s, c) + 1)))
    return (NULL);

x = 0;

    // sauter les séparateur en début de ligne (au cas ou)
while( s[i] == c && s[i]!= 0 )
    i++;

word_start = i;

while( s[i++] ) {    // teste le caractère pointé puis incrémente
    if( s[i] == c || s[i] == 0 ) { // si séparateur trouvé ou fin de chaine

                //alloue et recopie texte
        tab[x++] = ft_substr(s, word_start, i - word_start);

                // saute encore multiples séparateurs
        while( s[i] != 0 && s[i] == c )
            i++;
                // si fin de chaine atteint, on quitte
        if( s[i] == 0 ) break;

        word_start = i;
    }
}

//if (tab)
    tab[x] = 0;
return (tab);
}*/

char			**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		x;
	size_t		start;

	i = 0;
	x = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char*) * (ft_count(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || (s[i - 1] == c)))
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			if (!(tab[x] = ft_substr(s, start, (i - start))))
				break;
			x++;
		}
		else
			i++;
	}
	if (tab != NULL)
		tab[x] = 0;
	return (tab);
}
