/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:53:09 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/22 15:28:40 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int index;

	index = 0;
	while (s[index])
	{
		if (s[index] == (unsigned char)c)
			return ((char*)&s[index]);
		index++;
	}
	if (s[index] == (unsigned char)c)
		return ((char*)&s[index]);
	return (NULL);
}

int		main(void)
{
	const char str[] = "What a nice day?!";
	const char ch = 'c';

	printf("%s\n", ft_strchr(str, ch));
	return (0);
}
