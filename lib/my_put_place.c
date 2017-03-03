/*
** my_put_place.c for my_put_place in /home/mondon_p/PSU_2016_my_printf/lib
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Wed Nov 16 21:25:13 2016 pierre mondon
** Last update Thu Nov 17 10:51:22 2016 pierre mondon
*/

#include <stdlib.h>

int     my_put_place(char *str)
{
  char  *base;
  int	n;

  n = &str;
  base = malloc(sizeof(char) * 17);
  base = "0123456789abcdef";
  if (n < 0)
    {
      my_putchar('-');
      n *= -1;
      to_base(n, base);
    }
  else
    to_base(n, base);
}
