#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *pre, char const *suf)
{
	char *cat;
	
	cat = ft_strnew(ft_strlen(pre) + ft_strlen(suf));
	if (!cat)
		return (NULL);
	cat = ft_strcpy(cat, (char *) pre);
	printf("before %s\n", cat);
	ft_strcat(cat, (char *)suf);
	printf("after %s\n", cat);
	return (cat);
}
