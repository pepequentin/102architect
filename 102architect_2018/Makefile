##
## EPITECH PROJECT, 2018
## makefile
## File description:
## yes
##

NAME	=	102architect

SRC	=	architect.c\
		rotator.c \
		reflection.c \
		scaling.c \
		translator.c \
		error.c\

$(NAME):	$(SRC)
		gcc $(SRC) -o $(NAME) -lm

clean:
		rm -f *.o

fclean: clean
		$(RM) $(NAME)

re : clean all

all : $(NAME)

.phony : all clean fclean re
