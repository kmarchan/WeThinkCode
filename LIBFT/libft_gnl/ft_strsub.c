/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:10:36 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:28:25 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;
	size_t	n;

	if (!s)
		return (NULL);
	i = start;
	n = 0;
	ss = ft_strnew(len);
	if (!ss)
		return (NULL);
	while (len--)
	{
		ss[n++] = s[i++];
	}
	ss[n] = '\0';
	return (ss);
}
