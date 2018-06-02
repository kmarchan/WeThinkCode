#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char src[] = "hello";
	char dest[] = "gobye";
	char src1[] = "hello";
	char dest1[] = "gobye";
	ft_memcpy(dest, src, 6);
	memcpy(dest1, src1, 6);
	printf("ft_dest = %s\n", dest); 
	printf("c._dest = %s\n", dest1); 
	return (0);
}
