/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:30:39 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/24 12:38:28 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nblength(int nb)
{
	int	l;

	l = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		l++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		l++;
	}
	return (l);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = nblength(n);
	if (!(str = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	str[length] = '\0';
	length--;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[length] = n % 10 + 48;
		n = n / 10;
		length--;
	}
	return (str);
}

int			main(void)
{
	printf("%s\n", ft_itoa(-54555));
	return (0);
}
