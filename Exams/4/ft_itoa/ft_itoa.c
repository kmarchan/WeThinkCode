/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 08:55:38 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/27 11:24:14 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int intlen(int n)
{
	int l;
	l = 0;
	int temp;
	temp = n;
	if (n == 0)
		return (1);
	if (temp < 0)
	{
		l++;
		temp *= -1;
	}
	while (temp > 0)
	{
		temp /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int i;
	int l;
	char *num;
	char *z = "0";
	char *max = "-2147483648";
	l = intlen(n);
	i = l;
	if (n ==  -2147483648)
		return (max);
	if (n == 0)
		return (z);
	num = (char *)malloc(sizeof(char) * l + 1);
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	num[i] = '\0';
	while (n > 0)
	{
		num[--i] = (n % 10 + '0');
		n /= 10;
	}
	return (num);
}

/*
#include <stdio.h>

int main()
{
	int n = 10;
	printf("%s\n", ft_itoa(n));
	n = 0;
	printf("%s\n", ft_itoa(n));
	n = -10;
	printf("%s\n", ft_itoa(n));
	n = -2147483648;
	printf("%s\n", ft_itoa(n));
	n = 2147483648;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
