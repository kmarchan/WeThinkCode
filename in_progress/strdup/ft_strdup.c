/*****************************************************************************/
/****************************  FT_STRDUP.C  **********************************/
/*****************************************************************************/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int len = 0;
	int i = 0;
	char *str;
	while (src[len] != '\0')
	{
		len++;
	}
	str = malloc (len +1);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

int main(void)
{
	char *src = "hello";
	char *str = 0; 
	str = ft_strdup(src);
	printf("src = %s\n", src);
	printf("str = %s\n", str);
}
