/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:56:21 by xli               #+#    #+#             */
/*   Updated: 2020/12/08 12:39:06 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static	void	ft_min(int n, int fd)
{
	if (n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	else
		ft_putchar_fd('0', fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == 0 || n == INT_MIN)
	{
		ft_min(n, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -1 * n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
