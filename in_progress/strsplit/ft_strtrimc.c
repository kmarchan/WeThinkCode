#include "libft.h"

char	*ft_strtrimc(char const *s, char c)
{
	size_t	i;
	size_t	e;
	size_t	n;
	char	*t;

	i = 0;
	if (!s)
		return (NULL);
	e = ft_strlen(s);
	while (s[i] == c && s[i])
		i++;
	while (s[e - 1] == c)
		e--;
	if ( i > e)
		return ("");
	n = (e - i);
	t = (char *)ft_strsub(s, i, n);
	if (!t)
		return (NULL);
	t[n] = '\0';
	return (t);
}
