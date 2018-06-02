#include <unistd.h>

void	ft_putstr(char const *s);

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	write(1, "\n", 1);
}

