/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:25:23 by uroy              #+#    #+#             */
/*   Updated: 2018/11/13 17:05:06 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*sdst;
	char	*ssrc;

	sdst = (char*)dst;
	ssrc = (char*)src;
	i = 0;
	if (ssrc == sdst)
		return (dst);
	while (i < n)
	{
		sdst[i] = ssrc[i];
		i++;
	}
	dst = sdst;
	return (dst);
}
