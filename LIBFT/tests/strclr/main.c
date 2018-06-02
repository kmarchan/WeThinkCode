#include "libft.h"
#include <stdio.h>

int main()
{
	char s[] = "\0\0\0\0\0\0\0\0";
	char t[] = "happy birthday\0";
	
	ft_strclr(t);
	printf("%d\n", ft_strcmp(t, s));
	return (0);
}	
	
