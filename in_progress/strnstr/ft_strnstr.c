/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 07:56:15 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/22 10:12:41 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t n)
{
	unsigned int s;
	unsigned int f;

	s  = 0;
	while (hay[s] != '\0' && s < n--)
	{
		f = 0;
		while (ned[f] == hay[s + f])
		{
			if (ned[f + 1] == '\0')
			{
				return ((char *)hay + s);
			}
			f++;
		}
		s++;
	}
	return (NULL);
}

