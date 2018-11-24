/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:36:30 by uroy              #+#    #+#             */
/*   Updated: 2018/11/09 11:40:58 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*sdst;
	unsigned char	*ssrc;

	sdst = (unsigned char*)dst;
	ssrc = (unsigned char*)src;
	i = 0;
	if (n)
	{
		while (i < n)
		{
			sdst[i] = ssrc[i];
			if (ssrc[i] == (unsigned char)c)
				return (&sdst[i + 1]);
			i++;
		}
	}
	return (0);
}
