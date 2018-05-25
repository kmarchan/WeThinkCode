/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 07:44:39 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/25 10:38:13 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s[i] == c)
		return ((char *)s);
	i = ft_strlen(s);
	while (s[i] != c)
	{
		if (i-- == 0)
		{
			return (NULL);
		}
	}
	return ((char *)(s + i));
}
