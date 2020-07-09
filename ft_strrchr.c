/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:03:25 by savitull          #+#    #+#             */
/*   Updated: 2020/07/09 16:06:47 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	x;
	int		i;

	str = NULL;
	x = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == x)
			str = (char *)&s[i];
		i++;
	}
	if (s[i] == x)
		str = (char *)&s[i];
	return (str);
}
