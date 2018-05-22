/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:56:42 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/22 10:04:36 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int s;
	int f;

	s = 0;
	while (str[s] != '\0')
	{
		f = 0;
		while (to_find[f] == str[s + f])
		{
			if (to_find[f + 1] == '\0')
			{
				return (str + s);
			}
			f++;
		}
		s++;
	}
	return (NULL);
}
