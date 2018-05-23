#include <stdio.h>
#include "libft.h"

void	*ft_memccpy(void *des, const void *src, int c, size_t n);

int main()
{
	const char src[50] = "source str";
	char dest[10]; 
	strcpy(dest, "helloooo");
    printf("before memcpy dest = %s\n", dest);
	memccpy(dest, src, 'd', 0); //strlen(src)+1);
	printf("after memcpy dest = %s\n", dest);
     return(0);
}

