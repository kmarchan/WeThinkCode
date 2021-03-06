/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 12:51:31 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/28 08:59:43 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!(s1 && s2))
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else 
		return (0);
}
