##
## Makefile for make in /home/mondon_p/CPool_infinadd/lib/my
## 
## Made by pierre mondon
## Login   <mondon_p@epitech.net>
## 
## Started on  Mon Oct 24 10:05:03 2016 pierre mondon
## Last update Tue Feb 14 11:03:37 2017 pierre mondon
##

SRC =	my_printf.c \
	my_put_place.c \
	my_put_octal_spe.c \
	my_put_binary.c \
	my_put_unsigned.c \
	my_put_hex.c \
	my_put_octal.c \
	my_getnbr.c \
	my_isneg.c \
	my_power_rec.c \
	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	my_revstr.c \
	my_strcapitalize.c \
	my_strcat.c \
	my_strcmp.c \
	my_strcpy.c \
	my_str_isalpha.c \
	my_str_islower.c \
	my_str_isnum.c \
	my_str_isprintable.c \
	my_str_isupper.c \
	my_strlen.c \
	my_strlowcase.c \
	my_strncmp.c \
	my_strncpy.c \
	my_strstr.c \
	my_strupcase.c \
	my_swap.c	\
	my_strdup.c \
	get_next_line.c

OBJ = 	$(SRC:.c=.o)

NAME = 	libmy.a

HFILE = my.h

all: 	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(HFILE) ../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: 	fclean all
