/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:36:09 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/30 09:07:10 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int	temp;
	char	*s;
	size_t	i;

	temp = n;
	i = 0;
//	if (!n)
//		return (NULL);
	if (n == (-2147483647 - 1))
	{
		s = ft_strnew(ft_strlen("-2147483648"));
		if (!s)
			return (NULL);
		ft_strcpy(s, "-2147483648");
	}
	if (n < 0)
	{
		i++;
		temp = temp * -1;
	}
	while (temp > 0)
	{
		temp = temp / 10;
		i++;
	}
	s = ft_strnew(i);
	if (!s)
		return (NULL);
	if (n < 0)
		{
			s[0] = '-';
			n = n * -1;
		}
	if (n == 0)
		s[i] = '0';
	while (n)
	{
			s[--i] = (n % 10 + '0');
			n = n / 10;
	}
	return (s);
}
