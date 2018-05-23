#include <stdio.h>
#include <string.h>

int ft_memcmp(char *s1, char *s2, size_t n);

int main(void)
{
	char s1[] = "fluffi";
	char s2[] = "fluffy";
	int ret;
	memcpy(s1, "abcdef", 6);
	memcpy(s2, "ABCDEF", 6);

	ret = ft_memcmp(s1, s2, 5);

	if (ret > 0)
		printf("s2 is less than s1");
	else if (ret < 0)
		printf("s1 is less than s2");
	else
		printf("s1 is equal to s2");
	return (0);
//	printf("ft_ %d\n", (ft_memcmp(s1, s2, 7)));
//	printf(".c_ %d\n", memcmp(s1, s2,7));
//	return (0);
	
}

