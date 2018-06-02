/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:21:56 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/29 13:51:44 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
 #include <stdio.h>

char test(char c)
{
	printf( "%c\n", c );
	c = ft_toupper(c);
	return (c);
}


int    main()
{

	char *new;
	char *p = "abcd";
	char (*foo)(char) = test;


	// foo = &test;
	new = ft_strmap(p, foo);
	ft_putstr(new);
	return(1);
}
