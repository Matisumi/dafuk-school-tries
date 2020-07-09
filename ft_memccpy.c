/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 13:58:08 by savitull          #+#    #+#             */
/*   Updated: 2020/07/09 16:33:54 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
}
