/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:18:19 by uroy              #+#    #+#             */
/*   Updated: 2018/11/13 10:10:01 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	if (size >= 18446744073709551615UL)
		return (NULL);
	if ((mem = (char*)malloc(sizeof(*mem) * (size + 1))) == NULL)
		return (NULL);
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
