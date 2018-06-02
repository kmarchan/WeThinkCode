#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
//	int i;
//	char *m;
//
//	i = 0;
//	m = (char *)ft_memalloc(7);
///	while (m[i] == '\0')	
//	printf("0\n");
//	i++;
//	printf("%d\n", i);
//	return (0);
	size_t size = 514;
	//char *cmp = malloc(size);
	int diff;
        //
	void *test = ft_memalloc(size);
	void *ret = ft_memalloc(size);
	//bzero(cmp, size);
	diff = memcmp(test, ret, size);
	printf("memalloc cmp %i\n", diff);
	ft_memdel(test);
	free(ret);
	diff = memcmp(test, ret, size);
	printf("memdel cmp %i\n", diff);

}
