/*
** my_putnbr_base.c for my_putnbr_base in /home/mondon_p
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Tue Oct 11 17:14:38 2016 pierre mondon
** Last update Tue Dec 20 11:29:06 2016 pierre mondon
*/

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 31)
	{
	  my_putchar('\\');
	  to_hex(str[i]);
	}
      else
	my_putchar(str[i]);
      i++;
    }
}
