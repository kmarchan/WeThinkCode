# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmarchan <kmarchan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/02 14:29:33 by kmarchan          #+#    #+#              #
#    Updated: 2018/08/24 17:49:49 by kmarchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a

SRC=	ft_putstr.c ft_putchar.c ft_putnbr.c ft_memset.c ft_putendl.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_bzero.c ft_memcpy.c ft_memccpy.c ft_strlen.c ft_atoi.c ft_strcmp.c \
   	ft_strncmp.c ft_memcmp.c ft_memmove.c ft_memchr.c ft_strcat.c \
	ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_strequ.c \
	ft_strsplit.c ft_strtrimc.c ft_strarr.c ft_striter.c ft_chrcount.c\
	ft_striteri.c ft_strmap.c ft_strmapi.c ft_itoa.c ft_intlen.c \
	ft_strnequ.c ft_strsub.c ft_strjoin.c ft_isspace.c ft_strtrim.c \
   	ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_memalloc.c\
	ft_strdup.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
   	ft_isprint.c ft_strcpy.c  ft_strncpy.c ft_strrev.c ft_isupper.c \
	ft_islower.c ft_toupper.c ft_tolower.c ft_strstr.c ft_strnstr.c \
	get_next_line.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
	ft_lstiter.c ft_lstmap.c free_lst.c\

OBJ= $(SRC:.c=.o)

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
