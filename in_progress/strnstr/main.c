/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:46:07 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/22 14:14:15 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char str[] = "";
	char find[] = "kjmdhsnkjm";
//	ft_putstr(ft_strnstr(str, find, 3));
//	ft_putstr(strnstr(str, find, 17));
//	if (!(ft_strnstr(str, find, 3)))
//	{
//		printf("Good");
//	}
	printf("ft_%s\n", ft_strnstr(str, find, 3));
	printf("str_%s", strnstr(str, find, 3));
	return (0);
}
