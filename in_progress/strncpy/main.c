#include "libft.h"
#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *des, char *src, size_t n);
//void    ft_putstr(char *s);

int     main()
{
		char dest[] = "destination string";
		char src[] = "i am the source";
		ft_putendl(ft_strncpy(dest, src, 15));
		ft_putstr(strncpy(dest, src, 15));
	//	printf("%s\n", strcpy(dest, src));
		return (0);
}
