CC = gcc
NAME = ragnarok
SRC = main.c \
	  actions.c \
	  actions3.c \
	  actions_monstre.c \
	  battle.c \
	  my_function2.c \
          my_functions.c
OBJ = $(SRC:%.c=%.o)
CFLAGS = -W -Wall -ansi -pedantic -I.
RM = rm -f

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean :	
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all