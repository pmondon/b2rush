/*
** my_square_root.c for my_square_root in /home/mondon_p/CPool_Day5
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Fri Oct  7 14:59:25 2016 pierre mondon
** Last update Tue Dec 20 11:29:18 2016 pierre mondon
*/

int	my_square_root(int nb)
{
  int	root;
  int	p;

  p = 2;
  root = 0;
  if (nb <= 0)
    return (0);
  while (my_power_rec(root, p) != nb)
    {
    root++;
    }
  return (root);
}
