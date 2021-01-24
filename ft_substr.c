/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 09:20:08 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/23 14:44:40 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		j;
	char		*s2new;

	j = 0;
	if (!(s2new = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (j < len)
	{
		s2new[j] = s[j + start];
		j++;
	}
	s2new[j] = '\0';
	return (s2new);
}

int		main(void)
{
	const char str[] = "abcdefghijkl";

	printf("%s\n", ft_substr(str, 4, 13));
	return (0);
}
