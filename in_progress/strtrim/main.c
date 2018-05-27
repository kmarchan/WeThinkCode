#include "libft.h"
#include <stdio.h>

int main()
{
	char *s = " 	 hello world 	\n";

	printf("input %s\n", s);
	printf("output %s\n", ft_strtrim(s));
	return (0);
}
