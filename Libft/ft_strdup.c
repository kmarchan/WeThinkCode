/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:47:11 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/21 14:50:43 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(const char *src)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = malloc(ft_strlen(src));
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
