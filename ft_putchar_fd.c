/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 14:31:17 by savitull          #+#    #+#             */
/*   Updated: 2020/07/08 18:36:41 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	/*un char peut contenir 4 octets 
	mask les differents octets pour les ranger dans un tableau
	rendre ce tableau a write en lui precisant cb d'octet il doit imprimer
	------------------
	se renseigner sur le masking*/

		/*if((int)c > 0xff)
			write(fd, &c, sizeof(c));
		else*/
			write(fd, &c, 1);
}