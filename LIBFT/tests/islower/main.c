#include <stdio.h>
#include <ctype.h>
int	ft_islower(int c);

int	main()
{
	char c;
	c = 'a';
	printf("%d\n", ft_islower(c));
	printf("%d\n", islower(c));
	return (0);
}
