/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:56:42 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:28:15 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t s;
	size_t f;

	s = 0;
	if (ft_strcmp(to_find, "") == 0)
		return ((char *)str);
	if (ft_strcmp(str, "") == 0)
		return (NULL);
	else
	{
		while (str[s] != '\0')
		{
			f = 0;
			while (to_find[f] == str[s + f])
			{
				if (to_find[f + 1] == '\0')
				{
					return ((char *)str + s);
				}
				f++;
			}
			s++;
		}
	}
	return (NULL);
}
