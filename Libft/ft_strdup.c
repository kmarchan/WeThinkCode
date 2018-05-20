#include "stdlib.h"
size_t	ft_strlen(const char *s);

char *ft_strdup(const char *src)
{
	unsigned int i;
	char *str;
	
	i = 0;
	str = malloc (ft_strlen(src));
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
