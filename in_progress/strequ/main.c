#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char s1[] = "fluffy";
	char s2[] = "fluffy";
	printf("%d\n", (ft_strequ(s1, s2)));
	printf("%d\n", strcmp(s1, s2));
	return (0);
}

