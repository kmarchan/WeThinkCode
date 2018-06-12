/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 13:36:07 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:28:42 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimc(char const *s, char c)
{
	size_t	i;
	size_t	e;
	size_t	n;
	char	*t;

	i = 0;
	if (!s)
		return (NULL);
	e = ft_strlen(s);
	while (s[i] == c && s[i])
		i++;
	while (s[e - 1] == c)
		e--;
	if (i > e)
		return ("");
	n = (e - i);
	t = (char *)ft_strsub(s, i, n);
	if (!t)
		return (NULL);
	t[n] = '\0';
	return (t);
}
