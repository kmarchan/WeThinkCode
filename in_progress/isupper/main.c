#include <stdio.h>
#include <ctype.h>

int ft_isupper(int c);

int main()
{
	char c;
	c = 'A';
	printf("%d\n", ft_isupper(c));
	printf("%d\n", isupper(c));
	return (0);
}
