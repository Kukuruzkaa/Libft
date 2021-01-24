/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:41:44 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/22 12:54:48 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;
	char	*dest;
	char	*source;

	dest = (char*)dst;
	source = (char*)src;
	if (source < dest)
	{
		while (len-- > 0)
		{
			dest[len] = source[len];
		}
	}
	else
	{
		index = 0;
		while (index < len)
		{
			dest[index] = source[index];
			index++;
		}
	}
	return (dst);
}

int		main(void)
{
	char dest[20] = "";
	char src[] = "I extremely love this function";

	ft_memmove(dest, src, 15);
	printf("%s\n", src);
	return (0);
}
