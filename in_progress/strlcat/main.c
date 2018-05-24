#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char s1[20] = "fluffy";
	char s2[7] = "fluffi";
	char t1[20] = "fluffy";
	char t2[7] = "fluffi";
	printf("ft_%lu\n", ft_strlcat(s1, s2, 7));
	printf("c. %lu\n", strlcat(t1, t2, 7));
	return (0);
}

