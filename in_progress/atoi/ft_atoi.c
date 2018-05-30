/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:39:57 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/30 14:51:58 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *s)
{
	int i;
	int a;
	int neg;

	i = 0;
	a = 0;
	neg = 0;
	while (ft_isspace(s[i]))
	{
		i++;
	}
//	if (s[i] == '-' && ft_isdigit(s[i + 1]))
	while (s[i] == '-' || s[i] =='+')
		i++;
	neg = i;
		//printf("%d\n", i);
	while (ft_isdigit(s[i]))
	{
		a = (a * 10) + (s[i] - '0');
		i++;
	}
	if (s[neg - 1] == '-')
		a *= -1;
	return (a);
}

