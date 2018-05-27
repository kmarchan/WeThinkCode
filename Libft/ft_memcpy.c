/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:25:57 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/23 16:14:52 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*end

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	end = (unsigned char *)dest + n;
	while (d != end)
	{
		*d++ = *s++;
	}
	return (dest);
}
