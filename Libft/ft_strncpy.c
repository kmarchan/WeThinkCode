/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:08:25 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/22 08:08:54 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *des, char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i <= n)
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
