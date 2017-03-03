/*
** my_find_prime_sup.c for my_find_prime_sup in /home/mondon_p/CPool_Day5
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Fri Oct  7 16:05:03 2016 pierre mondon
** Last update Fri Oct  7 18:49:18 2016 pierre mondon
*/

int	my_find_prime_sup(int nb)
{
  int	i;
  int	solv;

  i = nb;
  if (my_is_prime(nb) == 1)
    return (nb);
  while (my_is_prime(i) != 1)
    {
      i++;
      if (my_is_prime(i) == 1)
	solv = i;
    }
  return (solv);
}
