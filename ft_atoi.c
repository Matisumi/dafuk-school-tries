/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:06:50 by savitull          #+#    #+#             */
/*   Updated: 2020/06/15 15:16:19 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int res;

	res = 0;
	while(str && ft_isdigit(*str))
	{
		res = (res * 10) +(*str - 48);
		str++;
	}
	return(res);
}