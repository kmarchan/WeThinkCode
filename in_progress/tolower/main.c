#include <ctype.h>
#include <stdio.h>
int	ft_tolower(int c);
int	main()
{
	char c = 'A';
	printf("%c\n", ft_tolower(c));
	printf("%c", tolower(c));
	return (0);
}
