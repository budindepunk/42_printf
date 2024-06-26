# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csilva-r <csilva-r@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/05 13:44:45 by csilva-r          #+#    #+#              #
#    Updated: 2024/05/05 13:59:21 by csilva-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c arg_dispatch.c \
		put_functions/ft_putchar.c put_functions/ft_putnbr.c \
		put_functions/ft_putptr.c put_functions/ft_putstr.c \
		put_functions/ft_strlen.c put_functions/ft_putunbr.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

%.o:	%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
		$(RM) $(OBJS)
		$(RM) exe

fclean: clean
		$(RM) $(NAME)

test:
	$(CC) main_test.c $(SRCS) -o exe && ./exe && $(RM) $(OBJS) $(NAME) exe

re:	fclean all
