#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int	temp;
	char	*s;
	size_t	i;

	temp = n;
	i = 0;
	if (n == (-2147483647 - 1))
	{
		s = ft_strnew(ft_strlen("-2147483648"));
		ft_strcpy(s, "-2147483648");
	}
	if (n < 0)
	{
		i++;
		temp = temp * -1;
	}
	while (temp > 0)
	{
		temp = temp / 10;
		i++;
	}
	s = ft_strnew(i);
	while (s && i)
	{
		if (n < 0)
		{
			s[0] = '-';
			n = n * -1;
		}
		printf("%d\n", n);
		if (n >= 10)
		{
			s[i] = (n % 10);
			n = n / 10;
		}
		printf("%s\n", s);
		i--;
//		else
//		{
//			s[i] = n + '0';
//		}
//		i--;
	}
	return (s);
}
