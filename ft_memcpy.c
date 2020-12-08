/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:10:56 by xli               #+#    #+#             */
/*   Updated: 2020/12/08 12:22:55 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*d;

	if (!dst && !src)
		return (NULL);
	d = dst;
	while (n > 0)
	{
		*((char *)dst) = *((char *)src);
		dst++;
		src++;
		n--;
	}
	return (d);
}
