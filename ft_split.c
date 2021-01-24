/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:31:42 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/23 14:42:23 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counting_words(char const *s, char c)
{
	int	index;
	int	nombre;

	index = 0;
	nombre = 0;
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		if (s[index] && s[index] != c)
			nombre++;
		while (s[index] && s[index] != c)
			index++;
	}
	return (nombre);
}

static char	*ft_fillword(const char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(word = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	int		x;
	int		y;
	int		words;
	char	**tab;

	words = ft_counting_words(s, c);
	if (!(tab = (char**)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	x = 0;
	y = 0;
	while (s[x])
	{
		while (s[x] && s[x] == c)
			x++;
		if (s[x] && s[x] != c)
		{
			tab[y] = ft_fillword(&s[x], c);
			y++;
			while (s[x] && s[x] != c)
				x++;
		}
	}
	tab[y] = NULL;
	return (tab);
}

int			main(int ac, char *av[])
{
	char *str;
	char sep;
	int	i;
	char **tab;

	str = av[1];
	sep = av[2][0];
	(void)ac;
	i = 0;
	tab = ft_split(str, sep);
	while (tab[i])
	{
		printf("tab[%2d]\t = \t\"%s\"\n", i, tab[i]);
		i++;
	}
	printf("tab[%2d]\t = \t\"%s\"\n", i, tab[i]);
	return (0);
}
