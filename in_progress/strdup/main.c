
#include <stdio.h>

char	*ft_strdup(char *src);

int main(void)
{
	char *src = "hello";
	char *str = 0; 
	str = ft_strdup(src);
	printf("src = %s\n", src);
	printf("str = %s\n", str);
}
