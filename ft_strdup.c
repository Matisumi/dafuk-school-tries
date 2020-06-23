/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:07:32 by savitull          #+#    #+#             */
/*   Updated: 2020/06/23 18:08:44 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if(!(s2 = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char))))
		return(NULL);
	ft_strlcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}