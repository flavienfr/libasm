SRCS = srcs/ft_strlen.s

NAME = libasm.a

OBJS = ${SRCS:.s=.o}

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

test : $(NAME)
		gcc ${FLAGS} main.c $(NAME)

$(NAME) : ${OBJS}
		ar rc $(NAME) ${OBJS}
		ranlib $(NAME)

.s.o : ${SRCS}
		nasm -fmacho64 ${SRCS}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f $(NAME)

re : fclean
		make all

.PHONY: all clean fclean re bonus
