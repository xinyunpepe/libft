/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:35:01 by xli               #+#    #+#             */
/*   Updated: 2020/12/10 14:49:31 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	element;
	t_list	new_head;
	t_list	new_next;
	
	if (!lst || !f)
		return ;
	if (!(new_head = ft_lstnew(f(lst->content))))
		return ;
