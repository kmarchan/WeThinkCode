NAME=	libft.a

SRC=	ft_putstr.c ft_putchar.c ft_putnbr.c ft_memset.c ft_putendl.c \
	ft_bzero.c ft_memcpy.c ft_strlen.c ft_atoi.c ft_strcmp.c ft_strdup.c \
	ft_isalpha.c ft_isdigit.c

OBJ=	*.o

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) $(HEAD)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

all:	$(NAME)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
