#include <stdio.h>
#include "libft.h"

int main()
{
	char *msg = "This is the string: not copied";

    char buffer[80];
	memset( buffer, '\0', 80 );
    printf("%p\n",memccpy( buffer, msg, ':', 80 ));
    printf( "%s\n", buffer );

     return(0);
}
