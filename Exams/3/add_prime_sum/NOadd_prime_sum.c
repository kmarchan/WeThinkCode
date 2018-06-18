/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 09:10:36 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/13 10:50:29 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_atoi(const char *s)
{
	int a;
	int i;

	a = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			a = (a * 10) + (s[i] - '0');
			i++;	
		}
		else 
			return (0);
	}
	return (a);
}
void ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar (n + '0');
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{	
		int i;
		int sum;
		int n;

		n = ft_atoi(argv[1]);
		sum = 0;
		i = 2;
		if (n != 0) 
		{
			while (1 <= n)
			{
				if ((n % i) == 0)
					break ;
				sum = sum + i;
				printf(" prime %d	", i);
				printf("%d\n", sum);
				i++;
			}	
			ft_putnbr(sum);
		}
	}
	else if (argc != 2 || argv[1][0] == '-')
			write (1, "0", 1);
		write (1, "\n", 1);
}
