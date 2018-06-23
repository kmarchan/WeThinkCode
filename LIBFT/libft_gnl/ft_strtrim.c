/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:42:27 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:28:35 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	e;
	size_t	n;

	i = 0;
	if (!s)
		return (NULL);
	e = ft_strlen(s);
	while (ft_isspace(s[i]) && s[i])
		i++;
	while (ft_isspace(s[e - 1]))
		e--;
	n = (e - i);
	if (i > e)
		return (ft_strsub(s, 0, 0));
	return (ft_strsub(s, i, n));
}
