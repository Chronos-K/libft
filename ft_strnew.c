/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:39:12 by uroy              #+#    #+#             */
/*   Updated: 2018/11/22 11:17:44 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = ft_memalloc(size)) == NULL)
		return (NULL);
	while (i < size + 1)
	{
		str[i] = 0;
		i++;
	}
	str[i] = '\0';
	return (str);
}
