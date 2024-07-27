# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 11:42:50 by atabcheh          #+#    #+#              #
#    Updated: 2024/06/20 12:08:34 by atabcheh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

RM	=	rm -f

AR	=	ar -rcs

INCLUDE	=	ft_printf.h
SOURCES	=	ft.c ft_printf.c

OBJECTS	=	$(SOURCES:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJECTS) $(INCLUDE)
			$(AR) $(NAME) $(OBJECTS)

.c.o:	$(CC) (CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
		$(RM) $(OBJECTS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
