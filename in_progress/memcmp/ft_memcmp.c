/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:54:48 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/23 17:00:26 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *f;
	char *s;
	size_t i;

	i = 0;
	f = (char *)s1;
	s = (char *)s2;
	while ((unsigned char)f[i] == (unsigned char)s[i] && i < n)
	{
		i++;
	}
	return ((unsigned char)f[i] - (unsigned char)s[i]);
}
