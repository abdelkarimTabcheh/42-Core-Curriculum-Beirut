# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 14:29:55 by atabcheh          #+#    #+#              #
#    Updated: 2024/07/11 14:46:18 by atabcheh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRCS = pipex.c ft_utils.c 

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ./libft

LIBFT_LIB = libft/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	cc -Wall -Wextra -Werror -o $(NAME) $(OBJS) $(LIBFT_LIB)

.c.o: 
	cc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

clean:
	make -C $(LIBFT_DIR) clean
	rm -f ${OBJS}
	
fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
