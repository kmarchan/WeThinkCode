#include "libft.h"
#include <stdio.h>

int main()
{
	int c = '\0';
	char s[8] = "i123456";
	printf("ft is %s\n", ft_strchr(s, c));
	printf("c is %s\n", strchr(s, c));

	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char *d1 = strchr(src, '\0');
	char *d2 = ft_strchr(src, '\0');
    
	if (d1 == d2)
		printf("TEST_SUCCESS\n");
	else 
		printf("TEST_FAILED\n");
	printf("pc = %s\nft = %s\n", d1, d2);
	return (0);
}
