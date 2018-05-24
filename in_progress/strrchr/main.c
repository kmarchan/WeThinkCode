#include "libft.h"
#include <stdio.h>

int main()
{
	int c = 'i';
	char s[8] = "";
	printf("ft is %s\n", ft_strrchr(s, c));
	printf("c is %s\n", strrchr(s, c));
	return (0);
}
