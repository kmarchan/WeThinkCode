#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char src[] = "hello";
	char dest[] = "gobye";
	ft_memcpy(dest, src, 6);
	printf("dest = %s\n", dest); 
	return (0);
}
