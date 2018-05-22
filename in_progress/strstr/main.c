/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:12:55 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/22 14:40:12 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "kjadshfk.jahb";
	char to_find[] = "";
//	ft_putendl(ft_strstr(str, to_find));	
//	ft_putstr(strstr(str, to_find));	
	printf("ft %s\n", ft_strstr(str, to_find));
	printf("c.  %s\n", strstr(str, to_find));
	return (0);
}

