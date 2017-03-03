/*
** my_isneg.c for my_isneg in /home/mondon_p/CPool_Day03
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Thu Oct  6 21:26:59 2016 pierre mondon
** Last update Thu Oct  6 21:29:12 2016 pierre mondon
*/

int	my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  if (n >= 0)
    {
      my_putchar('P');
    }
  return (0);
}
