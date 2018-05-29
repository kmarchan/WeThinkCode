#include "libft.h"
#include <stdio.h>

int main()
{
	int n = -48723640;
	char *s;

	s = ft_itoa(n);
	printf("int = %d\n", n);
	printf("str = %s\n", s);
	return (0);
}
