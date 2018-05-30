/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:20:27 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/30 14:33:26 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char *str;
	char *str1;
	char *str2;
	char *str3;

	str = "\e02345 67";
	str1 = "-185";
	str2 = "abcd23";
	str3 = "ighdg-kjh5 67";
//	printf("s= %s\t", str);
//	printf("s1= %s\t", str1);
//	printf("s2= %s\t", str2);
//	printf("s3= %s\n", str3);
	printf("ft =%d\t", ft_atoi(str));
	printf("ft1 =%d\t", ft_atoi(str1));
	printf("ft2 =%d\t", ft_atoi(str2));
	printf("ft3 =%d\n", ft_atoi(str3));
	printf("st =%d\t", atoi(str));
	printf("st1 =%d\t", atoi(str1));
	printf("st2 =%d\t", atoi(str2));
	printf("st3 =%d\n", atoi(str3));
}
