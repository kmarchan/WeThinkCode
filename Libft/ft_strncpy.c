#include "libft.h"

char	*ft_strncpy(char *des, char *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n) /*des[i] != '\0' && src[i] != '\0')*/
	{
		while (src[i] != '\0' && i < n)
		{
			des[i] = src[i];
			i++;
		}
		des[i] = '\0';
		i++;
	}
	return (des);
}
