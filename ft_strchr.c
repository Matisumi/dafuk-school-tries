/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:03:11 by savitull          #+#    #+#             */
/*   Updated: 2020/06/18 15:20:36 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;
	int		i;
	char	*str;

	x = (char)c;
	i = 0;
	str = (char *)s;

	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		return(&str[i]);
	return(NULL);
}