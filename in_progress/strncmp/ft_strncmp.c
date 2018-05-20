#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	unsigned int i = 0;
	while (s1[i] == s2[i] && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (i <= n)
			i++;
	}
	return (s1[i] - s2[i]);
}
