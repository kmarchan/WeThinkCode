#include <stdio.h>
#include <string.h>

int ft_memcmp(char *s1, char *s2, size_t n);

int main(void)
{
char *s1 = "\xff\xaa\xde\x12";
char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
size_t size = 4;
int i1 = memcmp(s1, s2, size);
int i2 = ft_memcmp(s1, s2, size);

if (i1 == i2)
	printf("working\n");
else 
		printf("broken\n");
//	char s1[] = "fluffi";
//	char s2[] = "fluffy";
//	int ret;
//	memy(s1, "abcdef", 6);
//	memcpy(s2, "ABCDEF", 6);

//	ret = ft_memcmp(s1, s2, 5);
//
//	if (ret > 0)
//		printf("s2 is less than s1");
//	else if (ret < 0)
//		printf("s1 is less than s2");
//	else
//		printf("s1 is equal to s2");
//	return (0);
	printf("ft_ =  %d\n", ft_memcmp(s1, s2, 6));
	printf("std = %d\n", memcmp(s1, s2, 6));
	return (0);
}

