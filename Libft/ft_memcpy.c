/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:25:57 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/17 14:29:28 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*p;
	char			*s;

	p = (char *)dest;
	s = (char *)src;
	i = 0;
	while (n--)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (dest);
}
