#include "libft.h"
#include <stdio.h>

int main()
{
	char str[] = "am i a substring or not?";
	char *ss;

	ss = ft_strsub(str, 7, 9);
	printf("%s", ss);
	return (0);
}
