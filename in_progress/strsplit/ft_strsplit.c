#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	w;
	size_t	n;
	size_t	a;
	char	**ar;
	
	i = 0;
	a = 0;
	if (!s)
		return (NULL);
	w = ft_countcword(s, c);
	ar = (char **)ft_strnew(w);
	while (s[i] && a < w)
	{
		n = 0;
		while (s[i] == c)
			i++;	
		while (s[i] != c)
		{
			n++;
			i++;
		}
		ar[a] = ft_strsub(s, i - n, n);
		a++;

	}
	ar[a] = (NULL);
	return (ar);
}

