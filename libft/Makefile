# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 15:31:33 by pabserra          #+#    #+#              #
#    Updated: 2025/12/16 14:20:54 by pabserra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = 	libft_src/ft_isalpha.c\
			libft_src/ft_isdigit.c\
			libft_src/ft_isalnum.c\
			libft_src/ft_isascii.c\
			libft_src/ft_isprint.c\
			libft_src/ft_strlen.c\
			libft_src/ft_strlcpy.c\
			libft_src/ft_memset.c\
			libft_src/ft_bzero.c\
			libft_src/ft_memcpy.c\
			libft_src/ft_memmove.c\
			libft_src/ft_strlcpy.c\
			libft_src/ft_strlcat.c\
			libft_src/ft_toupper.c\
			libft_src/ft_tolower.c\
			libft_src/ft_strchr.c\
			libft_src/ft_strrchr.c\
			libft_src/ft_strncmp.c\
			libft_src/ft_memchr.c\
			libft_src/ft_memcmp.c\
			libft_src/ft_strnstr.c\
			libft_src/ft_atoi.c\
			libft_src/ft_calloc.c\
			libft_src/ft_strdup.c\
			libft_src/ft_substr.c\
			libft_src/ft_strjoin.c\
			libft_src/ft_strtrim.c\
			libft_src/ft_split.c\
			libft_src/ft_itoa.c\
			libft_src/ft_strmapi.c\
			libft_src/ft_striteri.c\
			libft_src/ft_putchar_fd.c\
			libft_src/ft_putstr_fd.c\
			libft_src/ft_putendl_fd.c\
			libft_src/ft_putnbr_fd.c\
			libft_src/ft_strcmp.c
			

BONUS = 	libft_src/ft_lstnew_bonus.c\
			libft_src/ft_lstadd_front_bonus.c\
			libft_src/ft_lstsize_bonus.c\
			libft_src/ft_lstlast_bonus.c\
			libft_src/ft_lstadd_back_bonus.c\
			libft_src/ft_lstdelone_bonus.c\
			libft_src/ft_lstclear_bonus.c\
			libft_src/ft_lstiter_bonus.c\
			libft_src/ft_lstmap_bonus.c


OBJS = $(SOURCE:.c=.o)
BONUS_OBJS = ${BONUS:.c=.o}

CC = cc
RM = rm -f
CFLAGS= -Wall -Werror -g3 -Wextra -Ilibft_include

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

all: $(NAME)

bonus: ${OBJS} ${BONUS_OBJS}
	ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}

clean:
	${RM} $(OBJS) ${BONUS_OBJS}

fclean: clean
	 ${RM} $(NAME) ${BONUS_OBJS}

re: clean all

.PHONY: re clean fclean all 
