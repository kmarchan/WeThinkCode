#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    src[] = "test basic du memccpy !";
    char    buff1[22];
    memset(buff1, 0, sizeof(buff1));
    char    *r1 = memccpy(buff1, src, 'm', 2);
    char    *r2 = ft_memccpy(buff1, src, 'm', 2);
    //char    *r1 = memccpy(buff1, src, 'm', 22);
    //char    *r2 = ft_memccpy(buff1, src, 'm', 22);
    printf("PC  %s\nMY  %s", r1, r2);
}



