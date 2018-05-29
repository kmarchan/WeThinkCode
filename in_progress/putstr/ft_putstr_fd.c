#include "libft.h"

void ft_putstr(const char *s)
{
	while (*s != '\0')
	{
		ft_putchar_fd(*s);
		s++;
	}
}
