#include "libft.h"

char	*ft_strrev(char *s)
{
	int len;
	int i;
	char rep;

	len = 0;
	i = 0;
	len = (ft_strlen(s) -1);
	while (i < len)
	{
		rep = s[i];
		s[i] = s[len];
		s[len] = rep;
		i++;
		len--;
	}
	return (s);
}
