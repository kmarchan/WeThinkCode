#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char s1[] = "fluffy";
	char s2[] = "fluffi";
	printf("%d\n", ft_strnequ(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));
	return (0);
}
