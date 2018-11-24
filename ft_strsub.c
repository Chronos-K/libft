/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:28:27 by uroy              #+#    #+#             */
/*   Updated: 2018/11/22 10:56:33 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*s2;

	if (s)
	{
		if ((s2 = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
			return (NULL);
		i = start;
		j = 0;
		while (s[i] && j < len)
		{
			s2[j] = s[i];
			j++;
			i++;
		}
		s2[j] = '\0';
		return (s2);
	}
	return (NULL);
}
