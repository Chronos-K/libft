/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 09:57:44 by uroy              #+#    #+#             */
/*   Updated: 2018/11/15 09:53:12 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int			ft_wordnb(const char *tab, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[i] == c && tab[i])
			i++;
		while (!(tab[i] == c && tab[i]))
			i++;
		j++;
		while (tab[i] == c && tab[i])
			i++;
	}
	return (j);
}

static int			ft_charnb(char const *tab, char c)
{
	int		nb;

	nb = 0;
	while (tab[nb] != '\0' && tab[nb] != c)
		nb++;
	return (nb);
}

static char			*get_next_word(char const *s, char c)
{
	int		size_word;
	char	*str;

	size_word = ft_charnb(s, c);
	str = NULL;
	if (!(str = ft_strnew(size_word)))
		return (NULL);
	str = ft_strncpy(str, s, size_word);
	return (str);
}

static void			ft_init_var(int *i, int *i_tab)
{
	*i_tab = 0;
	*i = 0;
}

char				**ft_strsplit(char const *s, char c)
{
	int		i;
	int		words;
	char	**tab;
	int		i_tab;

	if (!s)
		return (NULL);
	ft_init_var(&i, &i_tab);
	words = ft_wordnb(s, c);
	if ((tab = (char**)malloc(sizeof(char*) * (words + 1))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			tab[i_tab++] = get_next_word(&s[i], c);
			i += ft_charnb(&s[i], c);
		}
		else
			i++;
	}
	if ((tab[i_tab] = (char*)malloc(sizeof(char))) == NULL)
		return (NULL);
	tab[i_tab] = 0;
	return (tab);
}
