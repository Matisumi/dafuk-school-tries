/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 13:58:21 by savitull          #+#    #+#             */
/*   Updated: 2020/07/09 16:31:45 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ori;
	unsigned char	*new;
	size_t			i;

	i = 0;
	ori = (unsigned char *)src;
	new = (unsigned char *)dst;
	if (src == NULL && dst == NULL)
		return (0);
	if (new < ori)
	{
		while (i < len)
		{
			new[i] = ori[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			new[len] = ori[len];
		}
	}
	return (dst);
}
