#include "libft.h"
#include <stdio.h>
int main()
{
	int n = -623;
	int b = -0;
	int c = 156;
	char *s;
	char *e;
	char *d;

	s = ft_itoa(n);
	e = ft_itoa(b);
	d = ft_itoa(c);
	printf("int = %d\n", n);
	printf("str = %s\n", s);
	printf("str = %s\n", e);
	printf("str = %s\n", d);
	return (0);
}
