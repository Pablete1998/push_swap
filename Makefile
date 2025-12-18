NAME = push_swap

# Paths
SRC_DIR = src
INC_DIR = include
LIBFT_DIR = libft
PRINTF_DIR = printft

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/printft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -I$(INC_DIR) -I$(LIBFT_DIR)/libft_include -I$(PRINTF_DIR)/printft_include 

# Sources
SRC = $(SRC_DIR)/push_swap.c\
	$(SRC_DIR)/push_swap_parser.c\
	$(SRC_DIR)/push_swap_construct.c

OBJ = $(SRC:.c=.o)

# Build
all: $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

clean:
	make -C $(LIBFT_DIR) clean
	make -C $(PRINTF_DIR) clean
	rm -f $(OBJ)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	make -C $(PRINTF_DIR) fclean
	rm -f $(NAME)

re: fclean all