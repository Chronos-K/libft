/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:51:26 by uroy              #+#    #+#             */
/*   Updated: 2018/11/13 14:58:00 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*save;
	t_list	*begin_new;

	if (lst)
	{
		save = f(lst);
		if ((newlist = ft_lstnew(save->content, save->content_size)) == NULL)
			return (NULL);
		begin_new = newlist;
		lst = lst->next;
		while (lst)
		{
			save = f(lst);
			if ((newlist->next =
						ft_lstnew(save->content, save->content_size)) == NULL)
				return (NULL);
			newlist = newlist->next;
			lst = lst->next;
		}
		return (begin_new);
	}
	return (NULL);
}
