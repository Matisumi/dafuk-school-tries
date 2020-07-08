/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savitull <savitull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:24:04 by savitull          #+#    #+#             */
/*   Updated: 2020/07/08 15:50:10 by savitull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list  *newlst;
	t_list	*newitem;

	while(lst)
	{
		if(!(newitem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&newlst, del);
			return(NULL);
		}
		ft_lstadd_back(&newlst, newitem);
		lst = lst->next;
	}
	return(newlst);
}