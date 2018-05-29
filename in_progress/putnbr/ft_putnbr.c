#include "libft.h"

void	ft_putnbr(int n)
{
	char c;
	if (n == -2147483647 - 1)
		ft_putstr("-2147483648");
	else if (n < 0)
	{	
		ft_putchar('-');
	//	n = n * -1;
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n /10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}
