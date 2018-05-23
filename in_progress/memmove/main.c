#include <stdio.h>
#include "libft.h"

int main()
{
	const char src[50] = "This is the string: not copied";
	char dest[50];
	strcpy(dest, "helkjadhgfklajhdlkjfhsdkljfhalkjdhfklajshdfoooo!!");
    	printf("before memcpy dest = %s\n", dest);
	memcpy(dest, src, strlen(src)+1);
	printf("after memcpy dest = %s\n", dest);

     return(0);
}
