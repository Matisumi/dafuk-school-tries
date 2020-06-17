/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:06:50 by savitull          #+#    #+#             */
/*   Updated: 2020/06/17 14:36:55 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(int c)
{
	if ( c == '\t' || c == '\n' || c == '\r' || c == '\v'
		|| c == '\f' || c == 32)
		return(1);
	return(0);
}

int			ft_atoi(const char *str)
{
	unsigned int	res;
	int 			neg;

	res = 0;
	neg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		neg = (*str == '-') ? -1 : 1;
		str++;
	}
	while(str && ft_isdigit(*str))
	{
		res = (res * 10) +(*str - '0');
		str++;
	}
	return(res * neg);
}