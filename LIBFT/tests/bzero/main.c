#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char s[] = "hello";
	char d[] = "hello";
	bzero(d, 6);
	ft_bzero(s, 6);
	printf("bzero = %s/n", d);
	printf("ft_bzero = %s/n", s);
	return (0);
}
