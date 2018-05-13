#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	char *p;
	char *s;

	p = (char *)dest;
	s = (char *)src;
	i = 0;
	while (n--)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (dest);
}
