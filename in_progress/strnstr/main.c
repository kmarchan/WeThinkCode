/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:46:07 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/22 12:26:23 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char str[] = "A slightly longer string.";
	char find[] = "lon";
//	ft_putstr(ft_strnstr(str, find, 3));
//	ft_putstr(strnstr(str, find, 17));
	if (!(ft_strnstr(str, find, 3)))
	{
		printf("Good");
	}
//	printf("%s\n", ft_strnstr(str, find, 3));
//	printf("%s", strnstr(str, find, 3));
	return (0);
}
