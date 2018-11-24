/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_elem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:02:03 by uroy              #+#    #+#             */
/*   Updated: 2018/11/14 10:38:30 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_find_elem(t_list *lst, int index)
{
	int		i;

	i = 0;
	while (lst != NULL && i < index)
	{
		lst = lst->next;
		i++;
	}
	if (lst == NULL)
		return (NULL);
	else
		return (lst);
}
