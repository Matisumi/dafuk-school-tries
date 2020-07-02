/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:28:36 by savitull          #+#    #+#             */
/*   Updated: 2020/07/02 15:01:52 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return(NULL);
	len1 = ft_strlen(s1) + 1;
	len2 = ft_strlen(s2) + 1;
	if(!(new = malloc(sizeof(char) * (len1 +len2))))
		return(NULL);
	ft_strlcpy(new, s1, len1);
	ft_strlcat(new, s2, len1 + len2);
	return(new);
}