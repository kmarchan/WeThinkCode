/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 12:55:33 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/26 14:02:03 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <strings.h>

int	intlen(int n, int base)
{
	int l;
	int temp;
	temp = n;
	l = 0;
	if (n == 0)
		return (1);
	if (temp < 0)
	{
		if (base == 10)
			l++;;
		temp *= -1;
	}
	while (temp > 0)
	{
		temp /= base;
		l++;
	}
	return (l);
}

char *ft_itoa_base(int n, int base)
{
	int i;
	int l;
	char *num;
	char *zero = "0";
	char *minin = "-2147483648";
	char *index = "0123456789ABCDEF";
	l = intlen(n, base);
	i = l;
	if (base >= 2 &&  base <= 16)
	{
			if (n == -2147483648)
			return(minin);
		if (n == 0)
			return (zero);
		num = (char *)malloc(sizeof(char) * l + 1);
		if ( n < 0)
		{
			if (base == 10)
				num[0] = '-';
			n *= -1;
		}
		num[l] = '\0';
		while (n > 0)
		{
			num[--i] = index[n % base];
			n /= base;
		}
		return (num);
		}
		else 
			return (NULL);
}

/*
int main()
{
	int n = 100;
	int base = 19;
	printf("%s\n", ft_itoa_base(n, base));
	return (0);
}
*/
