/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:39:57 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/30 14:45:49 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int b;
	int neg;

	i = 0;
	b = 0;
	if (!str)
		return (0);
	//if (str[i] == '-')
	//	i++;
	while (/*ft_isspace(str[i]) ||*/!ft_isdigit(str[i]))
	{
			if (((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i + 1]))
				   	|| ft_isalpha(str[i]))
					return (0);
			 i++;
	}
	neg = i;
	while (ft_isdigit(str[i]))
	{
		if (str[i] == 0)
			return (0);
	//	printf("i =%d str[i] =%c\n", i, str[i]);
		b = (b * 10) + (str[i] - '0');
		i++;
	}
	if (str[neg - 1] == '-')
		b *= -1;
	return (b);
}
