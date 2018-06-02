#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *s2 = "the cake is a lie !\0I'm hidden lol\r\n";
	char s1[] = "there is no stars in the sky";
	char *t2 = "the cake is a lie !\0I'm hidden lol\r\n";
	char t1[] = "there is no stars in the sky";
	int size;
	size = 0; // (ft_strlen(s1) + ft_strlen(s2));
	printf("size %d\n", size);
	printf("ft_%lu\n", ft_strlcat(s1, s2, size));
	printf("c. %lu\n", strlcat(t1, t2, size));
	return (0);
}

