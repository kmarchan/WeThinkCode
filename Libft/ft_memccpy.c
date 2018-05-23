/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:57:02 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/23 15:49:30 by kmarchan         ###   ########.fr       */
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
	if (ft_strcmp((char *)src, "") == 0)
	{
		*b = '\0';
		return (des);
	}
	while (i < n)
	{
		*b++ = *a++;
		if (*a == (unsigned char)c)
		{
			*b = *a;
			return (b + 1);
		}
		i++;
	}
	return (NULL);
}
