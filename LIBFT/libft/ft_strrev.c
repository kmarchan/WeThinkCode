/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:13:27 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:27:58 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int		len;
	int		i;
	char	rep;

	len = 0;
	i = 0;
	len = (ft_strlen(s) - 1);
	while (i < len)
	{
		rep = s[i];
		s[i] = s[len];
		s[len] = rep;
		i++;
		len--;
	}
	return (s);
}
