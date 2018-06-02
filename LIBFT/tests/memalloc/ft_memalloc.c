#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *p;
	p = malloc(size);
	if (!p)
		return (NULL);
	ft_bzero(p, size);
	return (p);
}
