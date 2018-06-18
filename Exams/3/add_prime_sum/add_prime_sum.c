/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:06:07 by exam              #+#    #+#             */
/*   Updated: 2018/06/14 12:21:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *s)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			sum = (sum * 10) + (s[i] - '0');
			i++;
		}
		else
		   return (0);	
	}
	return (sum);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnum(int n)
{
	if (n >= 10)
	{
		ft_putnum(n / 10);
		ft_putnum(n % 10);
	}		
	if (n < 10)
	{
		ft_putchar((n % 10) + '0');
	}
}

int is_prime(int n)
{
	int i;

	i = 2;
	while (i < n && i != n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int prim_sum(int n)
{
	int sum;
	int i;

	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (is_prime(i) == 1)
		{
			sum = sum + i;	
		}
		i++;
	}	
	return (sum);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnum(prim_sum(ft_atoi(argv[1])));
	}
	else 
		write (1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
