/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 08:26:21 by ddiakova          #+#    #+#             */
/*   Updated: 2021/01/23 14:49:44 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		str1len;
	int		str2len;
	int		i;
	int		j;
	char	*s3;

	str1len = ft_strlen(s1);
	str2len = ft_strlen(s2);
	if (!(s3 = (char*)malloc(sizeof(char) * (str1len + str2len))))
		return (NULL);
	i = 0;
	while (i < str1len)
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s3[str1len + j] = s2[j];
		j++;
	}
	s3[str1len + str2len] = '\0';
	return (s3);
}

int		main(void)
{
	const char s1[] = "ABCD";
	const char s2[] = "EFGH";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
