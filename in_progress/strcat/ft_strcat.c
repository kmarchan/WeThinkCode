/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:29:18 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/24 13:14:43 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*p;
	size_t	i;
	size_t	s;

	p = s1;
	s = 0;
	i = ft_strlen(s1);
	while (s2[s] != '\0')
	{
		s1[i] = s2[s];
		i++;
		s++;
	}
	s1[i]= '\0';
	return (s1);
}
