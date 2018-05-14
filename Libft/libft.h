#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/*typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct s_list	*next;
}		t_list;*/

void	*ft_memset(void *b, int c, size_t n);
void	ft_bzero(void *b, size_t n);
void	ft_putchar(char c);
void	ft_putendl(char const *s);
void	ft_putstr(char const *s);
void	ft_pitnbr(int n);

#endif
