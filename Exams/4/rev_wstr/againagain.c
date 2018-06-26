#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_wordcount(char *str)
{
	int c;
	int i;
	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
			c++;
		i++;
	}
	return (c + 1);
}

int	wordinx(char *str, int count)
{
	int i;
	i = 0;
	if (count == 0)
		return (0);
	while (count--)
	{	
		
		while (str[i] != '\0' && (str[i - 1] != ' ' || str[i -1] != '\t'))
		{
			i++;	
		}
	}
	printf("%d\n", i);
	return (i);
}

char	**strarr(char *str)
{
	int e;
	int w;
	int l;
	int i;
	int a;
	int count;
	char **ar;
	i = 0;
	a = 0;
	count = 0;
	l = ft_strlen(str);
	w = ft_wordcount(str);
	ar = (char **)malloc(sizeof(char *) * w + 1);
	while (e < w)
	{
		ar[e] = (char *)malloc(sizeof(char) * l + 1);
		while (i <= l)
		{
			ar[e][i] = '\0';
			i++;
		}
		i = wordinx(str, count);
		a = 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			ar[e][a] = str[i];
			a++;
			i++;
		}
		count++;
		e++;
	}
	return (ar);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int w = ft_wordcount(str);
		char **ar;
		ar = strarr(str);
		while (w--)
		{
			ft_putstr(ar[w]);
			if (w > 0)
				ft_putchar(' ');
		}
	}
	ft_putchar('\n');
	return (0);
}

