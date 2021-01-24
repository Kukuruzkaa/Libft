/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 09:15:23 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/23 10:11:00 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!dst || !src)
		return (0);
	while (src[i])
		i++;
	while (j < (dstsize - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

int		main(void)
{
	char dest [] = "";
	char src [] = "0hjhjjhjkjl1";
	printf("%ld\n", ft_strlcpy(dest, src, 9));
	return (0);
}
