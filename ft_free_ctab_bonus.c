/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_ctab_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:26:07 by savitull          #+#    #+#             */
/*   Updated: 2021/01/06 10:45:41 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_free_ctab(char **tab)
{
	size_t i;

	i = 0;
	while (tab[i])
	{
		ft_strclr(tab[i]);
		i++;
	}
	free(tab);
}
