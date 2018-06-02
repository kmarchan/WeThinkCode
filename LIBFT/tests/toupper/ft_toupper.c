//#include "libft.h"

int ft_islower(int c);

int ft_toupper(int c)
{
	if (ft_islower(c) == 1)
	{
		return (c - 32);
	}
	else 
		return (c);
}

