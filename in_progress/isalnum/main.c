
#include <stdio.h>
#include <ctype.h>
int	ft_isalnum(int c);

int main()
{
	char c = '0';
	printf("%d\n", ft_isalnum(c));	
	printf("%d", isalnum(c));	
}
