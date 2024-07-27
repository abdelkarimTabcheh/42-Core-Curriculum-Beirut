# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 14:20:56 by atabcheh          #+#    #+#              #
#    Updated: 2024/07/23 14:21:26 by atabcheh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =			ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
					ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
					ft_memmove.c ft_memset.c  ft_strchr.c  ft_strlcat.c ft_strlcpy.c \
					ft_strlen.c  ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c \
					ft_calloc.c ft_strdup.c ft_strnstr.c ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c get_next_line.c get_next_line_utils.c \
					ft_putchar.c ft_putstr.c ft_printf.c ft_print_hex.c ft_print_pointer.c \
					ft_print_unsig.c ft_putnbr.c
					
SRC_BONUS =		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
					ft_lstclear.c ft_lstiter.c ft_lstmap.c
			

NAME = libft.a
HDRS = libft.h
CC = cc 
FLAGS = -Wall -Werror -Wextra
OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(OBJS) $(SRC_BONUS:.c=.o)

all: $(NAME)

%.o:%.c
	@cc -Wall -Wextra -Werror -o $@ -c $<

bonus: $(BONUS_OBJS)
	@$(CC) $(SRC) $(SRC_BONUS) $(FLAGS)
	@ar rc $(NAME) $(BONUS_OBJS)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

clean:
	@/bin/rm -f $(BONUS_OBJS)
	@/bin/rm -f $(NAME)

fclean: clean
	@/bin/rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus
