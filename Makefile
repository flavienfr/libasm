SRCS = srcs/ft_strlen.s srcs/ft_strcpy.s srcs/ft_strcmp.s srcs/ft_write.s \
srcs/ft_read.s srcs/ft_strdup.s

NAME = libasm.a
OBJS = ${SRCS:.s=.o}
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

test : re
		gcc ${FLAGS} main.c $(NAME)

$(NAME) : ${OBJS}
		ar rc $(NAME) ${OBJS}
		ranlib $(NAME)

.s.o : ${SRCS}
		nasm -fmacho64 $<

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f $(NAME)

re : fclean
		make all

.PHONY: all clean fclean re bonus
