/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 13:52:32 by savitull          #+#    #+#             */
/*   Updated: 2020/06/17 17:07:45 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*new;
	unsigned char	*ori;

	new = (unsigned char *)dst;
	ori = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return(0);
	while (i < n)
	{
		new[i] = ori[i];
		i++;
	}
	return(dst);
}
