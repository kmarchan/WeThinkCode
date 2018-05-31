/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 07:44:39 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/31 15:00:26 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
/*	int	i;
	//int e;
	char *str;

	str = (char *)s;
	i = ft_strlen(s);
//	i = 0;
	str = str + ft_strlen(str);
	if (*str == c)
		return ((char *)str);
//	e = i;
	i--;
	while (*str != c && i > 0)
	{
				str--;
				i--;
	}
	if (!*str)
	{
		return (NULL);
	}
//	ft_putnbr(i);
	return (str);*/

	int	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char*)(s + i));
	if (!i)
		return (NULL);
	i--;
	while (s[i] != c && i >= 0)
	{
		i--;
		if (i < 0)
			return (NULL);
	}
	return ((char *)(s + i));
}
