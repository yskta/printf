NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -L/usr/local/lib -lcunit
SRCS		= ft_printf.c ft_printf_utils.c ft_printf_utils2.c ft_printf_csdi.c ft_printf_unsigned.c ft_printf_hex.c ft_printf_pointer.c test_ft_printf.c
%.o : %.c
			$(CC) $(CFLAGS) -c $?

OBJS		= $(SRCS:%.c=%.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)	

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all