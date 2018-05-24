#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char s1[20] = "fluffy";
	char s2[7] = "fluffi";
	char t1[20] = "fluffy";
	char t2[7] = "fluffi";
	printf("ft_%s\n", ft_strncat(s1, s2, 3));
	printf("c. %s\n", strncat(t1, t2, 3));
	return (0);
}

