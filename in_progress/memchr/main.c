#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

int main()
{
	const char src[50] = "/|\x12\xff\x09\x42\2002\42|\\";
//	char dest[10]; 
//	strcpy(dest, "helloooo");
   // printf("before memcpy dest = %s\n", dest);
	printf("%s = std\n", memchr(src, '\200', strlen(src)+1));
	printf("%s = ft", ft_memchr(src, '\200', strlen(src)+1));
     return(0);
}

