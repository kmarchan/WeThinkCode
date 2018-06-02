/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:37:20 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:25:49 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dlen)
{
	size_t lacat;
	size_t dsl;
	size_t mcpy;
	size_t i;

	i = 0;
	lacat = (ft_strlen(dest) + ft_strlen(src));
	dsl = (ft_strlen(dest));
	mcpy = (dlen - dsl - 1);
	if (dlen < dsl + 1)
		return (ft_strlen(src) + dlen);
	while (src[i] != '\0' && i < mcpy)
	{
		dest[dsl++] = src[i++];
	}
	dest[dsl] = '\0';
	return (lacat);
}
