#include <stdio.h>
#include <string.h>

char *ft_strcat(char *s1, char *s2);

int main(void)
{
	char s1[20] = "fluffy";
	char s2[7] = "fluffi";
	printf("ft_%s\n", ft_strcat(s1, s2));
	printf("c. %s\n", strcat(s1, s2));
	return (0);
}

