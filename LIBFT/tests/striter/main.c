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
void test(char *c)
{
    printf( "%c\n", *c );
}


int    main()
{


    char *p = "abcd";
    void (*foo)(char*) = &test;


    // foo = &test;
    ft_striter(p, foo);
    ft_putstr(p);
    return(1);
	return (0);
}
