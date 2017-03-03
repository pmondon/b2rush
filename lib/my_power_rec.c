/*
** my_power_rec.c for my_power_rec in /home/mondon_p/CPool_Day5
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Fri Oct  7 13:59:15 2016 pierre mondon
** Last update Mon Oct 10 15:23:33 2016 pierre mondon
*/

int	my_power_rec(int nb, int p)
{
  if (p <= 0)
    return (1);
  if (nb > 2147483647)
    return (0);
  return (my_power_rec(nb , p - 1) * nb);
}
