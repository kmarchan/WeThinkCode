//#include <unistd.h>
//#include "ft_putchar.c"

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

int	main(void)
{
	int i = 0;
	char *c;
	c = "hello world";
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
	return (0);
}
