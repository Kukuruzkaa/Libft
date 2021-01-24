/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:03:46 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/24 10:53:13 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int index;

	index = 0;
	while (s[index])
		index++;
	while (index >= 0)
	{
		if (s[index] == (unsigned char)c)
			return ((char*)&s[index]);
		index--;
	}
	return (NULL);
}

int		main(void)
{
	const char str[] = "What a nice day?!";
	const char ch = 'i';

	printf("%s\n", ft_strrchr(str, ch));
	return (0);
}
