#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eneto <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/04 19:57:10 by eneto             #+#    #+#              #
#    Updated: 2018/04/04 20:07:56 by eneto            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

CC = gcc

FLAGS = -Wall -Werror -Wextra

NORM = norminette

NORM_FLAGS = -R CheckForbiddenSourceHeader

SRCS =	functions.c \
		main.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

norm:
	$(NORM) $(NORM_FLAGS) *.c

clean:
	@/bin/rm -f *.o *~ *#

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all