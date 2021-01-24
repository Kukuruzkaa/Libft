/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:54:14 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/22 12:07:30 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		index++;
	}
	return (dst);
}

int		main(void)
{
	char dest[30];
	char src[] = "I extremely love this function";

	ft_memcpy(dest, src, 16);
	printf("%s\n", dest);
	return (0);
}
