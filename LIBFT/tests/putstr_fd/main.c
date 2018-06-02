#include <unistd.h>

void	ft_putchar_fd(char c, int fd);

int 	main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			ft_putchar_fd(argv[1][i], 1);
			i++;
		}
	}
	write (1, argv[0], 7);
	write (1, "\n", 1);
	write (1, argv[1], 5);
	write (1, "\n", 1);
}
