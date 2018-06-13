/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:54:48 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:20:33 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*f;
	unsigned char	*s;
	size_t			i;

	i = 0;
	if (!n)
		return (0);
	f = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while (f[i] == s[i])
	{
		i++;
		if (i >= n)
			return (0);
	}
	return ((unsigned char)f[i] - (unsigned char)s[i]);
}
