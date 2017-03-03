/*
** my_swap.c for my_swap in /home/mondon_p/CPool_Day04
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Thu Oct  6 11:08:49 2016 pierre mondon
** Last update Thu Oct  6 11:11:27 2016 pierre mondon
*/

int	my_swap(int *a, int *b)
{
  int	rev;
  int	rev2;

  rev = *a;
  rev2 = *b;
  *b = rev;
  *a = rev2;
}
