/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 07:50:43 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:23:50 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strarr(const char *s, char **dest, char c, size_t w)
{
	size_t	i;
	size_t	n;
	size_t	a;

	i = 0;
	a = 0;
	if (!dest)
		return (NULL);
	while (s[i] && a < w)
	{
		n = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c)
		{
			n++;
			i++;
		}
		dest[a] = ft_strsub(s, i - n, n);
		a++;
	}
	dest[a] = (NULL);
	return (dest);
}
