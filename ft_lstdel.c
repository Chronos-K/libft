/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:44:14 by uroy              #+#    #+#             */
/*   Updated: 2018/11/13 12:53:46 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*to_free;

	while (*alst)
	{
		to_free = *alst;
		*alst = (*alst)->next;
		del(to_free->content, to_free->content_size);
		free(to_free);
	}
	*alst = NULL;
}
