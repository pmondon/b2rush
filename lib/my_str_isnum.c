/*
** my_str_isnum.c for my_str_isnum in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 14:53:10 2016 pierre mondon
** Last update Mon Oct 10 14:55:26 2016 pierre mondon
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 48 && str[i] <= 57)
	i++;
      else
	return (0);
    }
  return (1);
}
