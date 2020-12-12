/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:19:35 by xli               #+#    #+#             */
/*   Updated: 2020/12/12 16:47:23 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_nb_str(char const *s, char c)
{
	unsigned int	i;
	unsigned int	nb_str;

	if (!s[0])
		return (0);
	i = 0;
	nb_str = 1;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb_str++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	return (nb_str);
}

static	void			ft_next_str(char **next_str, unsigned int *next_str_len,
						char c)
{
	unsigned int i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while (*(*next_str + i))
	{
		if (*(*next_str + i) == c)
			return ;
		(*next_str_len)++;
		i++;
	}
}

static	char			**ft_free(char **tab)
{
	unsigned int i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char					**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nb_str;
	unsigned int	i;

	if (!s)
		return (NULL);
	nb_str = ft_nb_str(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nb_str + 1))))
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i < nb_str)
	{
		ft_next_str(&next_str, &next_str_len, c);
		if (!(tab[i] = (char *)malloc(sizeof(char) * (next_str_len + 1))))
			return (ft_free(tab));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
