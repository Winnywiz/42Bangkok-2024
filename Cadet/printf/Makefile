NAME = libftprintf.a
CC = cc
LIBFT = ./libft
SRCS = srcs/ft_printf.c srcs/ft_int.c srcs/ft_unsigned.c srcs/ft_hex.c

OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	make -C  $(LIBFT)
	cp $(LIBFT)/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT)
	rm -f $(OBJS)

fclean: clean
	make fclean -C $(LIBFT)
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
