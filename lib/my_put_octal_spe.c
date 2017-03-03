/*
** my_put_octal_spe.c for my_put_octal_spe in /home/mondon_p/PSU_2016_my_printf
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Wed Nov 16 19:19:32 2016 pierre mondon
** Last update Wed Nov 16 19:26:35 2016 pierre mondon
*/

int	my_put_octal_spe(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] == 122)
	{
	  my_putchar('\\');
	  my_put_octal(str[i]);
	}
      else
	my_putchar(str[i]);
      i++;
    }
}
