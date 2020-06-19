/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:06:09 by savitull          #+#    #+#             */
/*   Updated: 2020/06/19 15:20:58 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;
	size_t	i3;

	i = 0;
	i2 = 0;
	i3 = 0;

	if (dstsize == 0)
		return(ft_strlen(src));
	while (dst[i] && i < dstsize)
		i++;
	i3 = i;
	while (i < dstsize - 1 && src[i2])
		dst[i++] = src[i2++];
	if (i3 < i)
		dst[i] = 0;
	while(src[i2++])
		i++;
	return(i);
}