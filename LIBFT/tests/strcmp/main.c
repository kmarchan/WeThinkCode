#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1[] = "fluffy";
	char s2[] = "fluffi";
	printf("%d\n", (ft_strcmp(s1, s2)));
	printf("%d\n", strcmp(s1, s2));
	return (0);
}

