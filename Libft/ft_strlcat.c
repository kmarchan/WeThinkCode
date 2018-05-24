/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:37:20 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/24 14:32:11 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dlen)
{
	size_t	i;
	size_t	s;

	s = 0;
	i = dlen - 1;
	while (src[s] != '\0' && s < dlen)
	{
		dest[i++] = src[s++];
	}
	if (dlen > 0 || ft_strlen(dest) < dlen)
		dest[i] = '\0';
	return (i);
}
