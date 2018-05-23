/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:25:57 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/23 07:49:37 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*s;

	p = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (p != (unsigned char *)dest + n)
	{
		*p++ = *s++;
	}
	return (dest);
}
