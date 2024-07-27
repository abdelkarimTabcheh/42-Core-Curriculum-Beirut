# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 17:44:57 by atabcheh          #+#    #+#              #
#    Updated: 2024/07/16 14:33:41 by atabcheh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
INC			= includes/
SRC_DIR			= srcs/
OBJ_DIR			= obj/
CC			= gcc
CFLAGS			= -Wall -Wextra -Werror -I
RM			= rm -f
AR			= ar rcs

LIB_DIR		=			$(SRC_DIR)lib/ft_isalnum.c \
					$(SRC_DIR)lib/ft_isalpha.c \
					$(SRC_DIR)lib/ft_isascii.c \
					$(SRC_DIR)lib/ft_isdigit.c \
					$(SRC_DIR)lib/ft_isprint.c \
					$(SRC_DIR)lib/ft_bzero.c \
					$(SRC_DIR)lib/ft_calloc.c \
					$(SRC_DIR)lib/ft_memchr.c \
					$(SRC_DIR)lib/ft_memcmp.c \
					$(SRC_DIR)lib/ft_memmove.c \
					$(SRC_DIR)lib/ft_memset.c \
					$(SRC_DIR)lib/ft_putchar_fd.c \
					$(SRC_DIR)lib/ft_putendl_fd.c \
					$(SRC_DIR)lib/ft_putnbr_fd.c \
					$(SRC_DIR)lib/ft_putstr_fd.c \
					$(SRC_DIR)lib/ft_atoi.c \
					$(SRC_DIR)lib/ft_itoa.c \
					$(SRC_DIR)lib/ft_tolower.c \
					$(SRC_DIR)lib/ft_toupper.c \
					$(SRC_DIR)lib/ft_split.c \
					$(SRC_DIR)lib/ft_strchr.c \
					$(SRC_DIR)lib/ft_strdup.c \
					$(SRC_DIR)lib/ft_striteri.c \
					$(SRC_DIR)lib/ft_strjoin.c \
					$(SRC_DIR)lib/ft_strlcat.c \
					$(SRC_DIR)lib/ft_strlcpy.c \
					$(SRC_DIR)lib/ft_strlen.c \
					$(SRC_DIR)lib/ft_strmapi.c \
					$(SRC_DIR)lib/ft_strncmp.c \
					$(SRC_DIR)lib/ft_strnstr.c \
					$(SRC_DIR)lib/ft_strrchr.c \
					$(SRC_DIR)lib/ft_strtrim.c \
					$(SRC_DIR)lib/ft_substr.c \
					$(SRC_DIR)lib/ft_lstadd_back.c \
					$(SRC_DIR)lib/ft_lstadd_front.c \
					$(SRC_DIR)lib/ft_lstclear.c \
					$(SRC_DIR)lib/ft_lstdelone.c \
					$(SRC_DIR)lib/ft_lstiter.c \
					$(SRC_DIR)lib/ft_lstlast.c \
					$(SRC_DIR)lib/ft_lstmap.c \
					$(SRC_DIR)lib/ft_lstnew.c \
					$(SRC_DIR)lib/ft_lstsize.c 

FTPRINTF_DIR	=	$(SRC_DIR)ft_printf/ft_printf.c \
					$(SRC_DIR)ft_printf/ft.c 

GNL_DIR			=	$(SRC_DIR)get_next_line/get_next_line.c \
					$(SRC_DIR)get_next_line/get_next_line_utils.c 

SRC 			= $(LIB_DIR) $(FTPRINTF_DIR) $(GNL_DIR)

OBJ 			= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC))

all: 			$(NAME)

$(NAME): 		$(OBJ)
				@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(@D)
				@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
				@$(RM) -r $(OBJ_DIR)
				@$(RM) .cache_exists

fclean: 		clean
				@$(RM) $(NAME)

re: 			fclean all

.PHONY: 		all clean fclean re
