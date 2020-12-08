/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:55:29 by xli               #+#    #+#             */
/*   Updated: 2020/12/08 12:37:54 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static	int	n_len(long n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = -1 * n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = n_len(nb);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = -1 * nb;
	}
	while (nb > 0)
	{
		str[len] = '0' + (nb % 10);
		nb = nb / 10;
		len--;
	}
	return (str);
}
