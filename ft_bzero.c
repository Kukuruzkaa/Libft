/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:41:44 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/22 11:50:32 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	index;
	char	*str;

	str = (char*)s;
	index = 0;
	if (n == 0)
		return (NULL);
	while (index < n)
	{
		str[index] = '0';
		index++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "I extremely love this function";
	ft_bzero(str, 10);
	printf("%s\n", str);
	return (0);
}
