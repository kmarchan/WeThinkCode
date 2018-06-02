
//#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *des, char *src);
void	ft_putstr(char *s);

int	main()
{
	char dest[] = "destination string";
	char src[] = "i am sournce";
	ft_putstr(ft_strcpy(dest, src));
	ft_putstr(strcpy(dest, src));
//	printf("%s\n", strcpy(dest, src));
	return (0);
}
