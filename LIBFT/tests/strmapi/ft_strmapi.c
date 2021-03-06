#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	new = ft_strnew(i);
	if (!new)
		return (NULL);
	while (i--)
		new[i] = f(i, s[i]);
	return (new);
}
