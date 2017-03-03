/*
** my_put_nbr.c for my_put_nbr in /home/Pierre/Day03
** 
** Made by Pierre mondon
** Login   <pierre@epitech.net>
** 
** Started on  Wed Oct  5 17:27:14 2016 Pierre Mondon
** Last update Wed Nov 16 17:23:25 2016 pierre mondon
*/

#include <stdlib.h>

void    display_in_base(char *result, char *base)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (result[i] != '\0')
    result[i] = base[result[i++]];
  my_putstr(result);
}

void	to_base(int n, char *base)
{
  int	div;
  char	*result;
  int	i;

  i = 0;
  result = malloc(sizeof(char) * 2147483647);
  div = my_strlen(base);
  while (n > my_strlen(base))
    {
      result[i++] = n % 16;
      n /= 16;
    }
  result[i] = n;
  result[i + 1] = '\0';
  my_revstr(result);
  display_in_base(my_strdup(result), base);
}

int	my_put_hex(int n)
{
  char	*base;

  base = malloc(sizeof(char) * 17);
  base = "0123456789ABCDEF";
  if (n < 0)
    {
      my_putchar('-');
      n *= -1;
      to_base(n, base);
    }
  else
    to_base(n, base);
}
