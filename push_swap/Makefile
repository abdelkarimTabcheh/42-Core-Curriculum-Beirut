NAME				= push_swap

LIBFT				= ./libft/libft.a
INC					= inc/
SRC_DIR				= srcs/
OBJ_DIR				= obj/

CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I
RM					= rm -f

OPERATIONS_DIR		=	$(SRC_DIR)operations/push.c \
						$(SRC_DIR)operations/rev_rotate.c \
						$(SRC_DIR)operations/rotate.c \
						$(SRC_DIR)operations/sort_stacks.c \
						$(SRC_DIR)operations/sort_stacks_2.c \
						$(SRC_DIR)operations/sort_three.c \
						$(SRC_DIR)operations/swap.c

PUSH_SWAP_DIR		=	$(SRC_DIR)push_swap/handle_errors.c \
						$(SRC_DIR)push_swap/init_a_to_b.c \
						$(SRC_DIR)push_swap/init_b_to_a.c \
						$(SRC_DIR)push_swap/push_swap.c \
						$(SRC_DIR)push_swap/split.c \
						$(SRC_DIR)push_swap/stack_init.c \
						$(SRC_DIR)push_swap/stack_utils.c

SRCS 				= $(OPERATIONS_DIR) $(PUSH_SWAP_DIR)

OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

start:				
					@make all

$(LIBFT):
					@make -C ./libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)

re: 				fclean all

.PHONY: 			start all clean fclean re