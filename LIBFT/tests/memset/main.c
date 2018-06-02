#include <stdio.h>
//#include <string.h>
//#include <unistd.h>
//#include "libft.a"
#include "libft.h"
//void *ft_memset(void *s, int c, long unsigned n);

//void ft_putstr(char *s);

int main(void)
{	
	char s[] = "hello";
//	ft_putstr(s);
 	ft_memset(s, '0', 6);
// 	memset(s, '0', 6);
	printf("%s", s);
//	ft_putstr(ft_memset(s, '0', 5));
	return (0);
}
