#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main()
{
	char c = 1;
	printf("%d\n", ft_isprint(c));
	printf("%d", isprint(c));

}
