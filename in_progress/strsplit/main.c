#include "libft.h"
#include <stdio.h>

/*int main()
{
	char *s = "split  ||this|for|me|||||!|";
	char **a;
	int	i = 0;

	a = ft_strsplit(s, '|');
	while (i < 6)
	{
		printf("%s\n", a[i]);
		i++;
	}
	return (0);
}*/

int main ()

{

    int i = 0;


    char *string = "      split       this for   me  !       ";
    char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
    char **result = ft_strsplit(string, ' ');


    while (i < 5)
    {
        printf("1: %d : %s\n",i , result[i]);
        i++;
    }
    i = 0;
    while (i < 5)
    {
        printf("1 : comp: %d\n",strcmp(result[i], expected[i]));
        i++;
    }

    write(1 ,"1================================\n", 34);


    char *s = "split  ||this|for|me|||||!|";
    char **res1 = ft_strsplit(s, '|');
    i = 0;
    while (i < 5)
    {
        printf("2 : %d : %s\n",i , res1[i]);
        // ft_putstr(res1[i]);
        i++;
    }

    write(1 ,"2================================\n", 34);

    char *s1 = "      split       this for   me  !       ";

    char **res2 = ft_strsplit(s1, ' ');
     i = 0;

    while (i < 5)
    {
        printf("3 : %d : %s\n",i , res2[i]);
        i++;
    }
     i = 0;
        while (i < 5)
    {
        printf("3 : comp: %d\n",strcmp(res2[i], expected[i]));
        i++;
    }


    write(1 ,"3================================\n", 34);


    char *s3 = "      split       this for   me  !       ";

    char **res3 = ft_strsplit(s3, ' ');
     i = 0;
    while (i < 5)
    {
        printf("4 : %d : %s\n",i , res3[i]);
        i++;
    }
     i = 0;
        while (i < 5)
    {
        printf("4 : comp: %d\n",strcmp(res3[i], expected[i]));
        i++;
    }
    write(1 ,"4================================\n", 34);

    char *s4 = "0 0 0 0 0 0 0 0 0";
    char **res4 = ft_strsplit(s4, ' ');

     i = 0;
    while (i < 9)
    {
        printf("5 : %d : %s\n",i , res4[i]);
        i++;
    }


    write(1 ,"5================================\n", 34);

    char *s5 = "split  ||this|for|me|||||!|";
    char **res5 = ft_strsplit(s5, '|');

     i = 0;
    while (i < 5)
    {
        printf( "6 :%d : %s\n",i , res5[i]);
        i++;
    }
     i = 0;
        while (i < 5)
    {
        printf( "6 :comp: %d\n",strcmp(res5[i], expected[i]));
        i++;
    }




    write(1 ,"6================================\n", 34);


    char *s6 = "      split       this for   me  !       ";

    char **res6 = ft_strsplit(s6, ' ');
    i = 0;
    while (i < 5)
    {
        printf("7 : %d : %s\n",i , res6[i]);
        i++;
    }
     i = 0;
        while (i < 5)
    {
        printf("7 : comp: %d\n",strcmp(res6[i], expected[i]));
        i++;
    }

    return (0);

}
