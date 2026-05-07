NAME = libftprintf.a
INCS = includes
SRCS = srcs/ft_printf.c srcs/tools1.c srcs/tools2.c srcs/tools3.c srcs/tools4.c
INCS = includes/
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all : $(NAME)

.c.o :
	$(CC) $(CFLAGS) -I $(INCS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
