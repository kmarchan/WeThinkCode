/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 10:15:10 by exam              #+#    #+#             */
/*   Updated: 2018/06/14 10:37:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int r;
	size_t c;

	i = 0;
	r = 0;
	c = 0;
	while (s[i] != '\0')
	{
		r = 0;
		while (reject[r] != '\0')
		{
			if (s[i] == reject[r])
			{
				return (c);
			}
			r++;
		}
		i++;
		c++;
	}
	return (c);
}
