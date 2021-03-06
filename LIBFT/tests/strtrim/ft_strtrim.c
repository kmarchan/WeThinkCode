/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:42:27 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/28 14:40:46 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	e;
	size_t	n;
	char	*t;
	
	i = 0;
	if (!s)
		return (NULL);
	e = ft_strlen(s);
	while (ft_isspace(s[i]) && s[i])
		i++;
	while (ft_isspace(s[e - 1]))
		e--;
	n = (e - i);
	//printf("len = %zu", ft_strlen(s));
	//printf("i = %zu\ne = %zu\nn = %zu\n", i, e, n);
	if (i > e)
		return ("");
	t = (char *)ft_strsub(s, i, n);
	if (!t)
		return (NULL);
	t[n] = '\0';
	return (t);
}
