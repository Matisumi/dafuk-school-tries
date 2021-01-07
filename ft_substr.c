/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:28:16 by savitull          #+#    #+#             */
/*   Updated: 2021/01/07 13:27:28 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s || !*s)
		return (NULL);
	if (!(new = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	if (start < ft_strlen(s))
		ft_strlcpy(new, &s[start], len + 1);
	return (new);
}
