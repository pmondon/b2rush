/*
** my_sort_int_tab.c for my_sort_in_tab in /home/mondon_p/CPool_Day04
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Tue Oct 11 20:33:23 2016 pierre mondon
** Last update Tue Oct 11 22:44:26 2016 pierre mondon
*/

void	my_sort_in_tab(int *tab, int size)
{
  int	i;
  int	j;
  int	mov;

  i = 0;
  j = 0;
  while (i < size - 1)
    {
      j = i;
      while (j < size)
	{
	  if (tab[i] > tab[j])
	    {
	      mov = tab[i];
	      tab[i] = tab[j];
	      tab[j] = mov;
	    }
	  j++;
	}
      my_putchar(tab[i] + 48);
      i++;
    }
  my_putchar(tab[i] + 48);
}
