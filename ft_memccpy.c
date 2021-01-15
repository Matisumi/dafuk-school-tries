/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 13:58:08 by savitull          #+#    #+#             */
/*   Updated: 2021/01/15 11:14:21 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*new;
	unsigned char	*ori;
	unsigned char	x;
	size_t			i;

	new = (unsigned char *)dst;
	ori = (unsigned char *)src;
	x = (unsigned char)c;
	i = 0;
	while (i < n && ori[i] != x)
	{
		new[i] = ori[i];
		i++;
	}
	if (ori[i] == x)
	{
		new[i] = ori[i];
		return (new + (i + 1));
	}
	return (NULL);
}*/
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dest;
	unsigned char	*srce;
	unsigned char	x;

	i = 0;
	dest = (unsigned char *)dst;
	srce = (unsigned char *)src;
	x = (unsigned char)c;
	while (i < n)
	{
		dest[i] = srce[i];
		if (srce[i] == x)
			return (dest + (i + 1));
		i++;
	}
	return (NULL);
}
