/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:40:53 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/23 12:13:30 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (!(str = (void*)malloc(count * size)))
		return (NULL);
	ft_memset(str, '0', count);
	return (str);
}

int		main(void)
{
	printf("%s\n", ft_calloc(5, 14));
	return (0);
}
