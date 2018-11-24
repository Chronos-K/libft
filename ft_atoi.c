/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:46:55 by uroy              #+#    #+#             */
/*   Updated: 2018/11/11 14:25:17 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		negativ;
	int		conv;

	conv = 0;
	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == ' ' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		negativ = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv = conv * 10 + str[i] - 48;
		i++;
	}
	if (negativ == 1)
		return (-conv);
	else
		return (conv);
}
