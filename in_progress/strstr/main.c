/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:12:55 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/23 08:06:48 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char str[] = "";
	char to_find[] = "jshdfkjh";
//	ft_putendl(ft_strstr(str, to_find));	
//	ft_putstr(strstr(str, to_find));	
	printf("ft %s\n", ft_strstr(str, to_find));
	printf("c.  %s\n", strstr(str, to_find));
	return (0);
}

