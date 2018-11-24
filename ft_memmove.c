/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:14:18 by uroy              #+#    #+#             */
/*   Updated: 2018/11/13 15:09:57 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*revmemcpy(char *dst, char *src, size_t len)
{
	size_t	i;

	i = len;
	while (i-- != 0)
		dst[i] = src[i];
	return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sdst;
	char	*ssrc;

	sdst = (char*)dst;
	ssrc = (char*)src;
	i = 0;
	j = 0;
	if (ssrc == sdst)
		return (dst);
	while (i < len)
	{
		if (ssrc < sdst)
		{
			sdst = (revmemcpy(sdst, ssrc, len));
			dst = sdst;
			return (dst);
		}
		sdst[i] = ssrc[j];
		i++;
		j++;
	}
	dst = sdst;
	return (dst);
}
