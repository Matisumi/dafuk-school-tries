/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:06:29 by savitull          #+#    #+#             */
/*   Updated: 2020/06/23 13:21:56 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_aneedle(const char *hay, const char *needle, size_t len)
{
	size_t i;

	i = 0;

	while (needle[i] && hay[i] == needle[i] && i < len)
		i++;
	if(needle[i] == 0)
		return(1);
	return(0);
}
char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char 	*hay;

	i = 0;
	hay = (char *)haystack;
	if (needle[0] == 0)
		return(hay);
	while (hay[i] && i < len)
	{
		if (hay[i] == needle[0])
			if (ft_aneedle(&hay[i], needle, (len - i)))
				return(&hay[i]);
		i++;
	}
	return (NULL);
}
