/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 10:49:32 by uroy              #+#    #+#             */
/*   Updated: 2018/11/15 09:52:57 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		intlen(unsigned int n)
{
	unsigned int		i;
	int					count;

	i = n;
	count = 0;
	if (n >= 10)
	{
		while (i >= 10)
		{
			i = i / 10;
			count++;
		}
		return (count + 1);
	}
	return (1);
}

static char		*itoafill(unsigned int n, char *str, unsigned int x)
{
	unsigned int	save;
	unsigned int	i;

	save = intlen(n);
	i = intlen(n) - ((x == 0) ? 1 : 0);
	while (i > x)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	str[i] = n + '0';
	str[save + 1] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;

	if (n < 0)
	{
		if ((str = (char*)malloc(sizeof(char) * intlen(-n) + 2)) == NULL)
			return (NULL);
		ft_bzero(str, intlen(-n) + 2);
		str[0] = '-';
		return (itoafill(-n, str, 1));
	}
	if ((str = (char*)malloc(sizeof(char) * intlen(n) + 1)) == NULL)
		return (NULL);
	ft_bzero(str, intlen(n) + 1);
	return (itoafill(n, str, 0));
}
