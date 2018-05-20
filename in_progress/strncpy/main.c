//#include "libft.h"
#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *des, char *src, size_t n);
void    ft_putstr(char *s);

int     main()
{
        char dest[] = "destination string";
        char src[] = "i am sournce";
        ft_putstr(ft_strncpy(dest, src, 10));
        ft_putstr(strncpy(dest, src, 10));
//      printf("%s\n", strcpy(dest, src));
        return (0);
}

