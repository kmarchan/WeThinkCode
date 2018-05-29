#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	new  = ft_strnew(i);
	if (!new)
		return (NULL);
	while (i--)
	{
		new[i] = f(s[i]);
	}
	return (new);
}
