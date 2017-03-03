/*
** my_putstr.c for my_putstr in /home/mondon_p/CPool_Day04
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Thu Oct  6 11:14:57 2016 pierre mondon
** Last update Thu Oct  6 11:44:24 2016 pierre mondon
*/

int	my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n++;
    }
  return (0);
}
