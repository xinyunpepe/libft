/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:33:45 by xli               #+#    #+#             */
/*   Updated: 2020/12/09 16:51:42 by Pepe             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

static	int	num_string(char const *s, char c)
{
	int i;
	int	num_string;

	i = 0;
	num_string = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0') 
				num_string++;
			i++;
		}
		i++;
	}
	return (num_string);
}

static char ft_free(char **tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        free(tab[i]);
        i++;
    }
    free(tab);
    return (NULL);
}

char	**ft_split(char const *s, char c)

