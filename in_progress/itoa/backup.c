/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:36:09 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/30 10:32:33 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_itoa(int n)
{
	int	temp;
	char	*s;
	size_t	i;

	temp = n;
	i = 0;
//	if (!n)
//		return (NULL);
	if (n == (-2147483648))
	{
	//	s = ft_strnew(ft_strlen("-2147483648"));
	//	if (!s)
	//		return (NULL);
		return ft_strdup("-2147483648");
	
	}
	i = ft_intlen(n);
//	if (n < 0)
//	{
//		i++;
//		temp = temp * -1;
//	}
//	while (temp > 0)
//	{
//		temp = temp / 10;
//		i++;
//	}
	//s = ft_strnew(i);
	//printf("%zu\n", i);
	s = ft_memalloc(i + 1);
	if (!s)
		return (NULL);
	s[i + 1] = '\0';
	if (n < 0)
	{
			s[0] = '-';
			n = n * -1;
	}
	if (n == 0)
	{	s = ft_memalloc(2);
		if (!s)
			return (NULL);
		s[i] = '0';
		s[i + 1] = '\0';
	}
	while (n)
	{
			s[--i] = (n % 10 + '0');
			n = n / 10;
	}
	//s[ft_strlen(s)] = '\0';
	return (s);
}
