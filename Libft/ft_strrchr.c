/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 07:44:39 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:27:50 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char*)(s + i));
	if (!i)
		return (NULL);
	i--;
	while (s[i] != c && i >= 0)
	{
		i--;
		if (i < 0)
			return (NULL);
	}
	return ((char *)(s + i));
}
