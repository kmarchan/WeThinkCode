//#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_islower(int c);

int ft_toupper(int c)
{
	if (ft_islower(c) == 1)
	{	
		return (c -32);
	}
	else 
		return (c);
}


int	main()
{
	char c = 'a';
	printf("%c\n", ft_toupper(c));
	printf("%c", toupper(c));
	return (0);
}
