NAME=	libft.a

SRC=	ft_putstr.c ft_putchar.c ft_putnbr.c ft_memset.c ft_putendl.c \
	ft_bzero.c ft_memcpy.c ft_memccpy.c ft_strlen.c ft_atoi.c ft_strcmp.c \
   	ft_strncmp.c ft_memcmp.c ft_memmove.c ft_memchr.c ft_strcat.c \
	ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
   	ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_memalloc.c\
	ft_strdup.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
   	ft_isprint.c ft_strcpy.c  ft_strncpy.c ft_strrev.c ft_isupper.c \
	ft_islower.c ft_toupper.c ft_tolower.c ft_strstr.c ft_strnstr.c \

OBJ= *.o	

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

all:	$(NAME)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
