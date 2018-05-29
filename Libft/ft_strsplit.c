/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 07:30:28 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/29 10:53:29 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{	
	size_t	w;
	char	**ar;
	
	if (!s)
		return (NULL);
	w = ft_countcword(s, c);
	ar = (char **)ft_memalloc(sizeof(char *) * (w + 1));
	ft_strarr(s, ar, c, w);
	if (!ar)
		return (NULL);
	return (ar);
}
