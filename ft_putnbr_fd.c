/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 09:51:54 by uroy              #+#    #+#             */
/*   Updated: 2018/11/11 09:54:23 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		b;
	int		c;

	if (n >= 0)
	{
		if (n >= 10)
		{
			b = n / 10;
			ft_putnbr_fd(b, fd);
		}
		c = n % 10;
		c = c + 48;
		ft_putchar_fd(c, fd);
	}
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	if (n == -2147483648)
	{
		ft_putnbr_fd(-21474836, fd);
		ft_putnbr_fd(48, fd);
	}
}
