/*
** my_str_isprintable.c for my_str_isprintable in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 15:09:03 2016 pierre mondon
** Last update Mon Oct 10 15:11:19 2016 pierre mondon
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] > 31)
	i++;
      else
	return (0);
    }
  return (1);
}
