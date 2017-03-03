/*
** my_printf.c for my_printf in /home/mondon_p/PSU_2016_my_printf/src
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Fri Nov 11 12:45:15 2016 pierre mondon
** Last update Thu Nov 17 12:33:46 2016 pierre mondon
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/projet.h"
#include "../include/my.h"

void		put_fonction(t_call **search)
{
  (*search[0]).c = 'd';
  (*search[0]).f = (void *)&my_put_nbr;
  (*search[1]).c = 'o';
  (*search[1]).f = (void *)&my_put_octal;
  (*search[2]).c = 'x';
  (*search[2]).f = (void *)&my_put_hex;
  (*search[3]).c = 'u';
  (*search[3]).f = (void *)&my_put_unsigned;
  (*search[4]).c = 'c';
  (*search[4]).f = (void *)&my_putchar;
  (*search[5]).c = 's';
  (*search[5]).f = (void *)&my_putstr;
  (*search[6]).c = 'p';
  (*search[6]).f = (void *)&my_put_place;
  (*search[7]).c = 'S';
  (*search[7]).f = (void *)&my_put_octal_spe;
  (*search[8]).c = '%';
  (*search[8]).f = (void *)&my_putchar;
  (*search[9]).c = 'b';
  (*search[9]).f = (void *)&my_put_nbr;
  (*search[10]).c = 'i';
  (*search[10]).f = (void *)&my_put_nbr;
}

int	check_fonction(char s, t_call **call)
{
  int	i;

  i = 0;
  while (i <= 10 && s != (*call[i]).c)
    i++;
  if (i == 11)
    exit(84);
  if (i == 8)
    my_putchar('%');
  if (i == 2 || i == 6)
    my_putstr("0x");
  return i;
}

int		my_printf(char *str, ...)
{
  int		i;
  t_call	**call;
  va_list	ap;
  int		j;

  j = 0;
  i = 0;
  va_start(ap, my_strlen(str));
  call = malloc(sizeof(t_call) * 11);
  while (i <= 11)
    call[i++] = malloc(sizeof(t_call));
  put_fonction(call);
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  if (check_fonction(str[++i], call) != 8)
	    (*call[check_fonction(str[i], call)]).f(va_arg(ap, void *));
	}
      else
	my_putchar(str[i]);
      i++;
    }
  va_end(ap);
}
