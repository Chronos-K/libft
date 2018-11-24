/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:40:18 by uroy              #+#    #+#             */
/*   Updated: 2018/11/21 17:37:55 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*fresh;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		if ((fresh = (char*)malloc(sizeof(char) *
						(ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
			return (NULL);
		while (s1[j])
			fresh[i++] = s1[j++];
		j = 0;
		while (s2[j])
			fresh[i++] = s2[j++];
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}
