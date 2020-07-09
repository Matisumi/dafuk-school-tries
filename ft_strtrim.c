/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:28:57 by savitull          #+#    #+#             */
/*   Updated: 2020/07/09 16:00:21 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnotwanted(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_empty(void)
{
	char	*ret;

	if (!(ret = (char*)ft_calloc(1, sizeof(char))))
		return (NULL);
	return (ret);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	i;
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1) - 1;
	i = 0;
	while (ft_isnotwanted(s1[i], set))
		i++;
	if (s1[i] == 0)
		return (new = ft_empty());
	while (ft_isnotwanted(s1[len], set))
		len--;
	len = len - i;
	if (!(new = ft_substr(s1, i, len + 1)))
		return (NULL);
	return (new);
}
