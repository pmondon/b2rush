/*
** my_put_nbr.c for my_put_nbr in /home/Maxime/Day03
** 
** Made by Maxime Magne
** Login   <Maxime@epitech.net>
** 
** Started on  Wed Oct  5 17:27:14 2016 Maxime Magne
** Last update Thu Oct  6 11:59:41 2016 Maxime Magne
*/

void	display_limit()
{
  my_putchar('-');
  my_putchar(2 + 48);
  my_putchar(1 + 48);
  my_putchar(4 + 48);
  my_putchar(7 + 48);
  my_putchar(4 + 48);
  my_putchar(8 + 48);
  my_putchar(3 + 48);
  my_putchar(6 + 48);
  my_putchar(4 + 48);
  my_putchar(8 + 48);
}

void display_nbr(int n)
{
  int div;

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

int	my_put_nbr(int n)
{
  if (n == -2147483648)
    {
      display_limit();
    }
  else if (n < 0)
    {
      my_putchar('-');
      n = -1 * n;
      display_nbr(n);
    }
  else
    {
      display_nbr(n);
    }
}
