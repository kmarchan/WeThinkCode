/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 07:30:28 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:28:08 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countcword(char const *s, char c)
{
	size_t		w;
	size_t		i;

	w = 0;
	i = 0;
	if (!s)
		return (0);
	if (s[i] != c)
		w++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			w++;
		i++;
	}
	return (w);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		w;
	char		**ar;

	if (!s)
		return (NULL);
	w = ft_countcword(s, c);
	ar = (char **)ft_memalloc(sizeof(char *) * (w + 1));
	ft_strarr(s, ar, c, w);
	if (!ar)
		return (NULL);
	return (ar);
}
