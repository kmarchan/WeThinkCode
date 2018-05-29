/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:21:56 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/29 14:14:05 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
 #include <stdio.h>
void test(unsigned int i, char *c)
{
    printf( "%c\n", c[i] );
}


int    main()
{


    char *p = "abcd";
    void (*foo)(unsigned int, char*) = &test;


    // foo = &test;
    ft_striteri(p, foo);
    ft_putstr(p);
    return(1);
}
