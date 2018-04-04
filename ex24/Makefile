NAME = libft

OBJ = ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o

INCLUDE = ft.h

CC = gcc

FLAGS = -Wall -Werror -Wextra 

PATH = srcs/

INC = includes/

all: $(OBJ) create
	ranlib $(NAME).a

%.o: $(PATH)%.c
	$(CC) -I $(INC) $(FLAGS) -c $< -o $@ 

create:
	@ar ruv $(NAME).a $(OBJ)

clean:
	@/bin/rm -f *.o *~ *#

fclean: clean
	@/bin/rm -f $(NAME).a

re: fclean all
