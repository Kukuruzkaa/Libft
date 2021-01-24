/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 10:21:18 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/23 15:08:12 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(const char *set, char c)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		debut;
	int		fin;
	int		index;
	char	*string;

	debut = 0;
	while (s1[debut] && ft_check_set(set, s1[debut]))
		debut++;
	fin = ft_strlen(s1);
	while (fin > debut && ft_check_set(set, s1[fin - 1]))
		fin--;
	if (!(string = (char*)malloc(sizeof(char) * (fin - debut + 1))))
		return (NULL);
	index = 0;
	while (debut < fin)
	{
		string[index] = s1[debut];
		index++;
		debut++;
	}
	string[index] = '\0';
	return (string);
}

int			main(void)
{
	const char str[] = "    !!***dari!!!aDaria'''!&   ";
	const char set[] = " ,!,*,	,&, ' ";

	printf("%s\n", ft_strtrim(str, set));
	return (0);
}
