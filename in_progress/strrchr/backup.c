#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	s = s + (ft_strlen(s) + 1);
	while (*s--)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
	}
	return (NULL);
}
