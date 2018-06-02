#include <ctype.h>
#include <stdio.h>
int	ft_toupper(int c);
int	main()
{
	char c = 'a';
	printf("%c\n", ft_toupper(c));
	printf("%c", toupper(c));
	return (0);
}
