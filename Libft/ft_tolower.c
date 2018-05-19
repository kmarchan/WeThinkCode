//#include "libft.h"

int ft_isupper(int c);

int ft_tolower(int c)
{
	if (ft_isupper(c) == 1)
	{
		return (c + 32);
	}
	else 
		return (c);
}

