/* ascii to intiger: 
	maybe ascii character - '0' = (int)arg. or something. remember this is a function.
*/

int ft_atoi(const char *str)
{
	int n;
	int i = 0;
	int count;
	while (str[i] != '\0')
	{
		i++;
		count++;
	
	}
	int  num[count] = {str};	
	i = 0;
	while (str[i] != '\0')
	{
		num[n] = (str[i] - 0);
		str[i] = num[n];
		i++;
		n++;
	}	
	return ((int)str);
}
