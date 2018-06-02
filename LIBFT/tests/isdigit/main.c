#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	main()
{
	int c = 10;
	printf("%d\n", ft_isdigit(c));
	printf("%d", isdigit(c));
}

