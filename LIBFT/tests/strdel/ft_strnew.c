#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	
	str = (char *)ft_memalloc(size);
	if (str != NULL)
		return (str);
	else 
		return (NULL);
}
