/*
** my_put_binary.c for my_put_binary in /home/mondon_p/PSU_2016_my_printf/lib
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Wed Nov 16 17:58:22 2016 pierre mondon
** Last update Tue Dec 20 11:28:07 2016 pierre mondon
*/

#include <stdlib.h>
#include "my.h"

void    to_binary(int n, char *base)
{
  int   div;
  char  *result;
  int   i;
  int	j;

  j = 0;
  i = 0;
  result = malloc(sizeof(char) * 2147483647);
  div = my_strlen(base);
  while (n > my_strlen(base))
    {
      result[i++] = n % 2 + 48;
      n /= 2;
      j++;
    }
  my_revstr(result);
  my_putstr(result);
}

int     my_put_binary(int n)
{
  char  *base;

  base = malloc(sizeof(char) * 3);
  base = "01";
  to_binary(n, base);
}
