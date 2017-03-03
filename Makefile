##
## Makefile for make in /home/mondon_p/PSU_2016_my_printf
## 
## Made by pierre mondon
## Login   <mondon_p@epitech.net>
## 
## Started on  Mon Nov 14 16:26:01 2016 pierre mondon
## Last update Sun Feb 26 18:52:13 2017 pmondon
##

SRC	=	src/main.c \
		src/game.c \
		src/ia.c \
		src/attack.c \
		src/inter.c

NAME	=	matchstick

OBJ	=	$(SRC:.c=.o)

LIB	=	-L  ./ -lmy -Iinlude

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
