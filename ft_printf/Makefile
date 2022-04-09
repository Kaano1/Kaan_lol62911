SRC = ft_putchar.c ft_putstr.c ft_printf.c ft_putnbr.c hex_base.c \

OBJ = $(SRC:.c=.o)

RM = rm -rf

NAME = libftprintf.a

all: $(NAME) $(GCC)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re
