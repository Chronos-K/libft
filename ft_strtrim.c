/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:58:41 by uroy              #+#    #+#             */
/*   Updated: 2018/11/13 10:15:39 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_strlentrim(char const *s)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	j = ft_strlen(s) - 1;
	while (j > i && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j--;
	while (i < j)
	{
		len++;
		i++;
	}
	return (len);
}

static int		ft_lenstart(char const *s)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		x;
	char	*str;

	if (s)
	{
		i = ft_strlentrim(s);
		if (i == 0)
		{
			str = ft_memalloc(1);
			return (str);
		}
		j = 0;
		if ((str = (char*)malloc(sizeof(char) * (i + 2))) == NULL)
			return (NULL);
		x = ft_lenstart(s);
		while (j <= i)
			str[j++] = s[x++];
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
