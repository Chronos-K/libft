/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:06:10 by uroy              #+#    #+#             */
/*   Updated: 2018/11/12 13:07:50 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*save1;
	unsigned char	*save2;

	save1 = (unsigned char*)s1;
	save2 = (unsigned char*)s2;
	i = 0;
	while (i < n && save1[i] == save2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (save1[i] - save2[i]);
}
