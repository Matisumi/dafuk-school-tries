/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:28:57 by savitull          #+#    #+#             */
/*   Updated: 2020/07/01 10:13:26 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int 	ft_isnotwanted(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if(set[i] == c)
			return(1);
		i++;
	}
	return(0);
}

static char *ft_empty()
{
	char	*ret;

	if(!(ret = (char*)malloc(sizeof(char))))
		return(NULL);
	ret[0] = 0;
	return(ret);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int 	i;
	int 	len;

	if(s1 == NULL)
		return(NULL);
	len = ft_strlen(s1);
	i = 0;
	while(ft_isnotwanted(s1[i], set))
		i++;
	if(i == 0 || i == len)
		return(new = ft_empty());
	len--;
	while(ft_isnotwanted(s1[len], set))
		len--;
	len = len - i;
	if(!(new = ft_substr(s1, i, len + 1)))
		return (NULL);
	return(new);
}
