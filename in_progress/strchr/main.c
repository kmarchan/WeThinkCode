#include "libft.h"
#include <stdio.h>

int main()
{
	int c = 'i';
	char s[8] = "abcdef";
	printf("ft is %s\n", ft_strchr(s, c));
	printf("ft is %s\n", strchr(s, c));
	return (0);
}
