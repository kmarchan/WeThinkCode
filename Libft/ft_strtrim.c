#include "libft.h"
#include <stdio.h>

int	ft_isspace(char c);

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t e;
	
	i = 0;
	e = ft_strlen(s);
	while (ft_isspace(s[i]) == 1 && s[i] != '\0')
		i++;
	printf("in %d\n", i);
	while (ft_isspace(s[e]) == 1 && e > 0)//(' '||'\t'||'\n'))
		e--;
	printf("start %d\n", i);
	printf("end %d\n", e);
	return ((char *)ft_strsub(s, i, e));
}
