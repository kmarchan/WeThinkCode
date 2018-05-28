#include "libft.h"

size_t	ft_countcword(char const *s, char c)
{	
	size_t	w;
	size_t	i;

	w = 0;
	i = 0;
	if (!s)
		return (0);
	if (s[i] != c)
	{
		w++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			w++;
		i++;
	}
	return (w);
}
