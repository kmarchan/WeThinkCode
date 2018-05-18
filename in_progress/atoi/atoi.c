int	ft_atoi(const char *str)
{
    int i = 0;
    int b = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        b = (i *10) + (str[i] - '0');
        i++;
    }
   return (b);
}
