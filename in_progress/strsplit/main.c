#include "libft.h"
#include <stdio.h>

int main()
{
	char *s = "**hello*fellow*students**";
	char **a;
	int	i = 0;

	a = ft_strsplit(s, '*');
	while (i < 4)
	{
		printf("a%s\n", a[i]);
		i++;
	}
	return (0);
}
