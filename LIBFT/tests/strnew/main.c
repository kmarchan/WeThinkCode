#include "libft.h"
#include <stdio.h>

int main()
{
	char *p;
	char *t;
	size_t i;

	i = 0;
	p = ft_strnew(10);
	t = malloc(10);
	bzero(t, 10);
	printf("memcmp %d\n", ft_memcmp(p, t, 11));
	printf("strcmp %d\n", ft_strcmp(p, t));
	while (i < 11)
	{
		if (p[i] == '\0')
			printf("p0");
		if (t[i] == '\0')
			printf("t0\n");
		i++;
	}
	return (0);
}
