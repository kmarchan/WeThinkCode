#include "libft.h"

char *ft_strdup(char *src)
{
	int len = 0;
	int i = 0;
	char *str;
	while (src[len] != '\0')
	{
		len++;
	}
	str = malloc (len +1);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
