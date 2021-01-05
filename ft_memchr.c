/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 13:58:53 by savitull          #+#    #+#             */
/*   Updated: 2021/01/05 12:13:00 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	x;

	str = (unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (str[i] && (i < n))
	{
		if (str[i] == x)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
