#include <stdio.h>
#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
	char s1[] = "fluffy";
	char s2[] = "fluffi";
	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));
	return (0);
}
