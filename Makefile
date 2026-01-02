NAME = push_swap

# Paths
SRC_DIR = src
INC_DIR = include
MVS = movements
ALG = the_algorith
lst = work_with_list
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

lists = $(lst)/array_to_list.c\
	$(lst)/lst_add_back.c\
	$(lst)/lst_add_front.c\
	$(lst)/lst_clear.c\
	$(lst)/lst_delone.c\
	$(lst)/lst_iter.c\
	$(lst)/lst_last.c\
	$(lst)/lst_new_node.c\
	$(lst)/lst_size.c\
	$(lst)/freator_lists.c

MOVS = $(MVS)/pa.c\
	$(MVS)/pb.c\
	$(MVS)/ra.c\
	$(MVS)/rb.c\
	$(MVS)/rr.c\
	$(MVS)/rra.c\
	$(MVS)/rrb.c\
	$(MVS)/rrr.c\
	$(MVS)/sa.c\
	$(MVS)/sb.c\
	$(MVS)/ss.c

ALGO = $(ALG)/is_in_order.c\
		$(ALG)/order_less_than_ten.c

OBJ = $(SRC:.c=.o)\
	$(lists:.c=.o)\
	$(MOVS:.c=.o)\
	$(ALGO:.c=.o)

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
