/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:36:09 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:19:45 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*is_n_0(int n, int i, char *s)
{
	if (n == 0)
	{
		s = ft_memalloc(2);
		if (!s)
			return (NULL);
		s[i] = '0';
		s[i + 1] = '\0';
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char	*s;
	size_t	i;

	i = 0;
	if (n == (-2147483648))
		return (ft_strdup("-2147483648"));
	i = ft_intlen(n);
	s = ft_memalloc(i + 1);
	if (!s)
		return (NULL);
	s[i + 1] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n = n * -1;
	}
	s = is_n_0(n, i, s);
	while (n)
	{
		s[--i] = (n % 10 + '0');
		n = n / 10;
	}
	return (s);
}
