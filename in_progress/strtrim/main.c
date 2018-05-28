#include "libft.h"
#include <stdio.h>

int main()
{
	char *s = "   \t  \n\n \t\t  \n\n\n   \n \n \t\t\n  ";

	printf("input%stest\n", s);
	printf("output%stest\n", ft_strtrim(s));
	return (0);
}
