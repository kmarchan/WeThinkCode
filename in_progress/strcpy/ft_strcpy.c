//#include "libft.c"

char	*ft_strcpy(char *des, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
