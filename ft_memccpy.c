/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:41:44 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/22 12:46:14 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	index;
	char			*dt;
	char			*sc;

	dt = (char*)dst;
	sc = (char*)src;
	index = 0;
	while (index < n)
	{
		dt[index] = sc[index];
		if (sc[index] == (unsigned char)c)
			return ((void*)&dt[index + 1]);
		index++;
	}
	return (0);
}

int		main(void)
{
	char dest[30];
	char src[] = "I extremely love this function";

	ft_memccpy(dest, src, 'a', 16);
	printf("%s\n", dest);
	return (0);
}
