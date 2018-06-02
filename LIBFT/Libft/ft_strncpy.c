/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:32:58 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/02 14:27:09 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *des, const char *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		des[i] = src[i];
		i++;
	}
	while (i != n)
		des[i++] = '\0';
	return (des);
}
