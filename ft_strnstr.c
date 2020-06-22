/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:06:29 by savitull          #+#    #+#             */
/*   Updated: 2020/06/22 19:07:05 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char 	*hay;

	i = 0;
	hay = (char *)haystack;
	if (needle[0] == 0)
		return(hay);
	while (hay[i])
	{
		if (ft_strncmp(&hay[i], needle, len) == 0)
			return(&hay[i]);
		i++;
	}
	if(needle == NULL || len == 0)
		return(hay);

	return (NULL);
}
