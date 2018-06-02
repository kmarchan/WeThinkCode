/*****************************************************************************/
/*********************************  Do_Op.c  *********************************/
/*****************************************************************************/

//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str);
//{
//	int i = 0;
//	int b = 0;
//
//	if (str[i] < '0' || str[i]  > '9')
//	{
//		i++;
//	}
//
//	while (str[i] >= '0' && str[i] <= '9')
//	{
//		b = (b * 10) + (str[i] - '0');
//		i++;
//	}
//
//	if(str[0]  == '-')
//	{
//		b = b * -1;
//	}
//
//	return (b);
//}

int main(int argc, char **argv)
{	
	char *num1;
	char *op;
	char *num2;
	int ans;
	int ans1;
	ans = 0;
	if (argc == 4)
	{
		num1 = argv[1];
		op = argv[2];
		num2 = argv[3];
		if (op[0] == '+')
		{
			ans = (ft_atoi(num1) + ft_atoi(num2));
			ans1 = (atoi(num1) + atoi(num2));
		}
		if (op[0] == '-')
		{
			ans = (ft_atoi(num1) - ft_atoi(num2));
			ans1 = (atoi(num1) - atoi(num2));
		}
		if (op[0] == '/')
		{
			ans = (ft_atoi(num1) / ft_atoi(num2));
			ans1 = (atoi(num1) / atoi(num2));
		}
		if (op[0] == '*')
		{
			ans = (ft_atoi(num1) * ft_atoi(num2));
			ans1 = (atoi(num1) * atoi(num2));
		}
		if (op[0] == '%')
		{
			ans = (ft_atoi(num1) % ft_atoi(num2));
			ans1 = (atoi(num1) % atoi(num2));
		}
		printf("ans %d\n", ans);
		printf("ans1 %d", ans1);
	}
	printf("\n");
	return (0);
}

