/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:57:02 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:20:11 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *des, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)des;
	while (i < n)
	{
		if (*a == (unsigned char)c)
		{
			*b = *a;
			return (b + 1);
		}
		*b++ = *a++;
		i++;
	}
	return (NULL);
}
