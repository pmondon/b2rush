/*
** my_put_unsigned.c for my_put_unsigned in /home/mondon_p/PSU_2016_my_printf/lib
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Wed Nov 16 16:53:37 2016 pierre mondon
** Last update Wed Nov 16 17:03:36 2016 pierre mondon
*/

void		display_nbr_unsigned(unsigned int n)
{
  unsigned int	div;

  div = 1;
  while ((n / div) >= 10)
    {
      div *= 10;
    }
  while (div > 0)
    {
      my_putchar((n / div) % 10 + 48);
      div /= 10;
    }
}

int     my_put_unsigned(unsigned int n)
{
  if (n < 0)
    {
      my_putchar('-');
      n = -1 * n;
      display_nbr_unsigned(n);
    }
  else
    display_nbr_unsigned(n);
  return (0);
}
