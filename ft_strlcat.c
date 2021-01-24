/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 10:11:48 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/23 11:27:30 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	if (dstsize <= sizedst)
		return (sizesrc + dstsize);
	i = 0;
	while (src[i] && sizedst + i < dstsize - 1)
	{
		dst[sizedst + i] = src[i];
		i++;
	}
	dst[sizedst + i] = '\0';
	return (sizedst + sizesrc);
}

int		main(void)
{
	char dest[] = "Hello New Yorkhjhjhjhj";
	char src[] = "Hello Paris Paris";

	printf("%zu", ft_strlcat(dest, src, 15));
	return (0);
}
