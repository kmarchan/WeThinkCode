#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *p;

	p = (char *)s;
	while (n--)
	{
		p[n] = c;
	}
	return (0);
}
