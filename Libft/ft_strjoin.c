/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:06:40 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:25:40 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *pre, char const *suf)
{
	char *cat;

	if (!pre || !suf)
		return (NULL);
	cat = ft_strnew(ft_strlen(pre) + ft_strlen(suf));
	if (!cat)
		return (NULL);
	cat = ft_strcpy(cat, (char *)pre);
	ft_strcat(cat, (char *)suf);
	return (cat);
}
