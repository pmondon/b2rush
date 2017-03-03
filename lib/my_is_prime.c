/*
** my_is_prime.c for my_is_prime in /home/mondon_p/CPool_Day05
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Fri Oct  7 18:30:29 2016 pierre mondon
** Last update Fri Oct  7 18:45:09 2016 pierre mondon
*/

int	my_is_prime(int nb)
{
  int	i;
  int	solv;

  i = 2;
  solv = 1;
  while ( i < nb)
    {
      if (nb % i == 0)
	{
	  solv = 0;
	}
      i++;
    }
  return (solv);
}
