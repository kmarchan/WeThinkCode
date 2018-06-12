/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 07:56:15 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:27:39 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t n)
{
	size_t s;
	size_t f;

	s = 0;
	if (ft_strcmp(ned, "") == 0)
	{
		return ((char *)hay);
	}
	else
	{
		while (hay[s] != '\0' && s < n)
		{
			f = 0;
			while (ned[f] == hay[s + f] && (f + s) != n)
			{
				if (ned[f + 1] == '\0')
				{
					return ((char *)hay + s);
				}
				f++;
			}
			s++;
		}
	}
	return (NULL);
}
