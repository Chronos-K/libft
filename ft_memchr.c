/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:53:35 by uroy              #+#    #+#             */
/*   Updated: 2018/11/14 17:13:59 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	cc;

	s2 = (unsigned char*)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n && s2[i] != cc)
		i++;
	if (i == n)
		return (NULL);
	else
		return (&s2[i]);
}
