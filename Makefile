NAME	= libftprintf.a

SRCS	= ft_printf.c \
			ft_printf_utils.c

OBJS	= $(SRCS:.c=.o)

FLAGS	= -Wall -Wextra -Werror

CC = gcc
$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
