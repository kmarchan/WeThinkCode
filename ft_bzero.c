#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *p;

	p = (char *)s;
	while (n--)
	{
		p[n] = '\0';
	}
}
