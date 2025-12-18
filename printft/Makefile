# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 16:12:22 by pabserra          #+#    #+#              #
#    Updated: 2025/12/16 14:21:04 by pabserra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printft.a


CC = cc
CFLAGS = -Wall -Werror -Wextra -g3 -Iprintft_include
RM = rm -fr

SRCS =	printft_src/ft_printf.c\
		printft_src/printf_putchar.c\
		printft_src/printf_putstr.c\
		printft_src/printf_putnbr.c\
		printft_src/printf_putnbru.c\
		printft_src/printf_ptr.c\
		printft_src/printf_puthexmin.c\
		printft_src/printf_puthexmax.c

OBJS = $(SRCS:.c=.o)

all: ${NAME}

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS) 
 
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ${NAME} $(OBJS)

re: fclean all

.PHONY: re fclean clean all