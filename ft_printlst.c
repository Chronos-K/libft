/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 09:25:15 by uroy              #+#    #+#             */
/*   Updated: 2018/11/14 10:20:04 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlst(t_list *elem)
{
	while (elem)
	{
		ft_putstr(elem->content);
		ft_putchar('\n');
		elem = elem->next;
	}
}
