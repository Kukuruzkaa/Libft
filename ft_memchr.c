/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:14:18 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/22 13:00:52 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	index;
	char			*str;

	index = 0;
	str = (char*)s;
	while (index < n)
	{
		if (str[index] == (unsigned char)c)
			return (&str[index]);
		index++;
	}
	return (NULL);
}

int		main(void)
{
	char str[] = "Daaaaaaaaaaaasssshhhaaa";

	printf("%s\n", ft_memchr(str, 's', 16));
	return (0);
}
