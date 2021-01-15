/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maindetest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 10:53:46 by savitull          #+#    #+#             */
/*   Updated: 2021/01/15 15:09:09 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	ft_troll(unsigned int i, char c)
{
	if (ft_isalpha(i))
		i = c;
	return (i);
}

int		main()
{
	if (ft_strmapi("", &ft_troll) != NULL)
		printf("=====TEST MAPI=====\n==>ok");
	else
		printf("=====TEST MAPI=====\n==> NOPE");
}
