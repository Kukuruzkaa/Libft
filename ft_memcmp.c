/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 12:23:37 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/22 13:12:49 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	index;
	char			*str;
	char			*str2;

	index = 0;
	str = (char*)s1;
	str2 = (char*)s2;
	while (index < n)
	{
		if (str[index] == str2[index])
		{
			index++;
		}
		else if (str[index] > str2[index] || str[index] < str2[index])
		{
			return (str[index] - str2[index]);
		}
	}
	return (0);
}

int		main(void)
{
	char s1[] = "Heliiio";
	char s2[] = "Helllllllo";

	printf("%d\n", ft_memcmp(&s1, &s2, 7));
	return (0);
}
