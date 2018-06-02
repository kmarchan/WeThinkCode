/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:37:20 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/26 09:56:05 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dlen)
{
	size_t i;
	size_t s;
//	int maxcpy;

//	maxcpy = dlen - ft_strlen(dest) - 1;
	s = 0;
	i = (ft_strlen(dest) + ft_strlen(src));
	if (dlen > 0 && ft_strlen(dest) < dlen)
	{
		printf("dest = %s, src = %s\n", dest, src);
	//	ft_strncat(dest, src, dlen - ft_strlen(dest));
		printf("cat %s\n", dest);
		while (src[s] != '\0' && i < (dlen - ft_strlen(dest) - 1))
		{
			dest[i++] = src[s++];
		}
		dest[i] = '\0';
		printf("%s\n",(char *)dest);
		return (i);
	}
	else 
		return (0);
}
