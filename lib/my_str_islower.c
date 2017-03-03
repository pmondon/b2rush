/*
** my_str_islower.c for my_str_islower in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 14:57:48 2016 pierre mondon
** Last update Tue Dec 20 11:31:01 2016 pierre mondon
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 122)
	i++;
      else
	return (0);
    }
  return (1);
}
