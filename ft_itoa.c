/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:30:00 by savitull          #+#    #+#             */
/*   Updated: 2020/07/03 15:52:14 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	unsigned int	nbr;
	int				count;

	count = 0;
	if (n < 0)
	{
		count++;
		nbr = n * -1;
	}
	else
		nbr = n;
	while(nbr >= 10)
	{
		count++;
		nbr = nbr / 10;
	}
	count++;
	return(count);
}

char			*ft_itoa(int n)
{
	size_t			len;
	unsigned int	nbr;
	char 			*str;

	len = ft_nbrlen(n);
	if(!(str = (char *)ft_calloc(len + 1, sizeof(char))))
		return(NULL);
	if (n < 0)
	{
		str[0] = '-';
		nbr = n * -1;
	}
	else
		nbr = n;
	len--;
	while(nbr >= 10)
	{
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	str[len] = (nbr % 10) + '0';
	return(str);
}