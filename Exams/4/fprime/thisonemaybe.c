#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n;
	int in;
	if (argc == 2)
	{
		in = atoi(argv[1]);
		n = 2;
		if (in == 1)
			printf("1");
		if (in == 0)
			printf("0");
		while (n < in)
		{
			while (in % n == 0)
			{
				printf("%d", n);
				if (n != in)
					printf("*");
				in = in /n;
			}
			n++;
		}
		if (in == n)
			if (in %n == 0)
				printf("%d", n);
	}
	printf("\n");
	return (0);
}
