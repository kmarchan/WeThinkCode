#include "libft.h"
#include <stdio.h>

int main()
{
	int c = 'a';
	char s[] = "abcd";
	printf("ft is %s\n", ft_strrchr(s, c));
	printf("c is %s\n", strrchr(s, c));
/*
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char *d1 = strrchr(src, 't');
	char *d2 = ft_strrchr(src, 't');
    
	if (d1 == d2)
		printf("TEST_SUCCESS\n");
	else 
		printf("TEST_FAILED\n");
	printf("pc = %s\nft = %s\n", d1, d2);*/
	return (0);
}
