/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:12:18 by xli               #+#    #+#             */
/*   Updated: 2020/12/08 12:12:24 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*dst;

	if (!(dst = malloc(count * size)))
		return (NULL);
	i = 0;
	while (i <= count * size)
	{
		dst[i] = 0;
		i++;
	}
	return ((void*)dst);
}
