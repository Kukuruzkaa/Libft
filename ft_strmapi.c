/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 10:29:27 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/24 10:37:50 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		size;
	char	*s2;

	size = ft_strlen(s);
	index = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (index < size)
	{
		s2[index] = (*f)(index, s[index]);
		index++;
	}
	s2[index] = '\0';
	return (s2);
}

char	function(unsigned int n, char c)
{
	int	somme;

	somme = n + 1 + c;
	return ('a');
}

int		main(void)
{
	char str[] = "Bonjour";

	printf("%s\n", ft_strmapi(str, function));
	return (0);
}
