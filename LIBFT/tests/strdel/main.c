#include "libft.h"
#include <stdio.h>

int main()
{
	char *s;
	char *t;

	t = ft_strnew(10);
	s = malloc(10);
	bzero(s, 10);
	printf("%d\n",ft_strcmp(s, t));
	ft_strdel((char **)t);
	free(s);
	printf("%d", memcmp(s, t, 11));
	return (0);
}
