/*
** my_put_oct.c for my_putoctal in /home/mondon_p
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Nov 14 16:20:27 2016 pierre mondon
** Last update Wed Nov 16 17:53:48 2016 pierre mondon
*/

#include <stdlib.h>

void    display_octal(char *result, char *base)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (result[i] != '\0')
    result[i] = base[result[i++]];
  my_putstr(result);
}

void    to_octal(int n, char *base)
{
  int   div;
  char  *result;
  int   i;

  i = 0;
  result = malloc(sizeof(char) * 2147483647);
  div = my_strlen(base);
  while (n > my_strlen(base))
    {
      result[i++] = n % 8;
      n /= 8;
    }
  result[i] = n;
  result[i + 1] = '\0';
  my_revstr(result);
  display_octal(my_strdup(result), base);
}

int     my_put_octal(int n)
{
  char  *base;

  base = malloc(sizeof(char) * 9);
  base = "01234567";
  if (n < 0)
    {
      my_putchar('-');
      n *= -1;
      to_octal(n, base);
    }
  else
    to_octal(n, base);
}
