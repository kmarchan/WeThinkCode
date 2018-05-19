#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int	main()
{
	char c = 1;
	printf("%d\n", ft_isascii(c));
	printf("%d", isascii(c));

}
