#include "libft.h"

void	ft_putnbr(int n)
{
	char c;
	if (n == -2147483647 - 1)
		ft_putstr_fd("-2147483648");
	else if (n < 0)
	{	
		ft_putchar_fd('-');
	//	n = n * - 1;
		ft_putnbr_fd(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n /10);
		ft_putnbr_fd(n % 10);
	}
	else
	{
		c = n + '0';
		//write(fd, &c, 1);
		ft_putchar_fd(c);
	}
}
