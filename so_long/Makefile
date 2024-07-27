# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 10:00:40 by atabcheh          #+#    #+#              #
#    Updated: 2024/07/23 10:05:26 by atabcheh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc

FLAGS = -Wall -Werror -Wextra -g

MLXFLAGS	=	-L ./minilibx-linux -lmlx -Ilmlx -lXext -lX11

LIBFT = ./libft/libft.a

LIBFTDIR = ./libft

MINILIBX_PATH	=	./minilibx-linux

MINILIBX		=	$(MINILIBX_PATH)/libmlx.a

SRC = 	src/game_validations.c \
		src/render_img.c \
		src/get_size_map.c \
		src/main.c \
		src/end_game.c \
		src/init_map.c \
		src/game_moves.c \
		src/get_maps.c \
		src/start_validations.c \
		src/path_validation.c

OBJ = $(SRC:%.c=%.o)

all: ${NAME}

${NAME}: $(OBJ)
	$(MAKE) --no-print-directory -C $(MINILIBX_PATH)
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(FLAGS) -lm $(SRC) $(MLXFLAGS) $(LIBFT) -o $(NAME)

clean:
	$(MAKE) clean -C ./libft
	@rm -rf $(OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	@rm -rf $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re
