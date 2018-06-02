#include "libft.h"

int	ft_atoi(const char *str)
{
    int i = 0;
    int b = 0;
    if (str[i] == '-')
    {
    	i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        b = (i *10) + (str[i] - '0');
        i++;
    }
    if (str[0] == '-')
    {
    	b *= -1;
    }
   return (b);
}
