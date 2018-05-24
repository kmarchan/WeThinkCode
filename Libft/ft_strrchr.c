#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	
	size_t	i;
	i = (ft_strlen(s));
	while (i--)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
	}
	return (NULL);
}
