#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putpos(int n)
{
	char num;
	if (n >= 10)
	{
		ft_putpos(n / 10);
		ft_putpos(n % 10);
	}
	else
	{
		num = n + '0';
		ft_putchar(num);
	}
}

int	ft_atoi_basic(char *s)
{
	int in;

	in = 0;
	while (*s >= '0' && *s <= '9')
	{
		in = (in * 10) + (*s - '0');
		s++;
	}
	return (in);
}

int	is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	add_prime_sum(int n)
{
	int i;
	int count;
	
	count = 0;
	i = 2;
	while (i <= n)
	{
		if ((is_prime(i)) == 1)
		{
			count = count + i;
		}
		i++;
	}
	ft_putpos(count);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if ((ft_atoi_basic(argv[1]) > 0))
		{
			add_prime_sum(ft_atoi_basic(argv[1]));
		}
	}
	else 
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}	

