/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:13:33 by uroy              #+#    #+#             */
/*   Updated: 2018/11/09 17:34:46 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	while (s1[i])
		i++;
	if ((dest = (char*)malloc(sizeof(*s1) * (i + 1))) == NULL)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		dest[j] = s1[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
