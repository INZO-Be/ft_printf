NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_print_hex.c\
ft_print_nb.c\
ft_print_ptr.c\
ft_print_str.c\
ft_printf.c\
ft_putchar.c
OBJ = $(SRC:.c=.o)
AR = ar
ARFLAG = rcs

all : $(NAME)

$(NAME):$(OBJ)
	$(AR) $(ARFLAG) $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)
re: fclean all