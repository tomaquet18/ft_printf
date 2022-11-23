# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alferna2 <alferna2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 18:30:05 by alferna2          #+#    #+#              #
#    Updated: 2022/11/03 19:42:42 by alferna2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			libftprintf.a

DIR_SRCS =		src/


PRINTF_HEADER = include/ft_printf.h

PRINTF_FILES =	ft_printf.c		\
				ft_printf_char.c\
				ft_printf_num.c	\
				ft_printf_str.c	\
				ft_printf_ptr.c \
				ft_putchar_fd.c

SRCS =			$(addprefix $(DIR_SRCS), $(PRINTF_FILES))

OBJS =			$(SRCS:.c=.o)

CFLAGS =		-Wall -Werror -Wextra

INCLUDES =		-I include/

AR =			ar rcs

%.o:			%.c $(PRINTF_HEADER)
				$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all:
				@$(MAKE) $(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
			rm -f $(OBJS) $(OBJS_BONUS)

fclean:
			@$(MAKE) clean
			rm -f $(NAME) $(NAME_BONUS)

re:
			@$(MAKE) fclean
			@$(MAKE) all

.PHONY: all clean fclean re