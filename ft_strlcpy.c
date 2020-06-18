/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:05:41 by savitull          #+#    #+#             */
/*   Updated: 2020/06/18 19:20:19 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;

	while ((i < dstsize) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (src[i])
	{
		while(src[i])
			i++;
	}
	else
		dst[i] = 0;
	return(i);
}

