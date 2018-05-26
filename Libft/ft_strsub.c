#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ss;
	size_t i;
	size_t n;

	i = start;
	n = 0;
	ss = ft_strnew(len);
	if (!ss)
		return (NULL);
	while (len--)
	{
		ss[n++] = s[i++];
	}
	return (ss);
}
