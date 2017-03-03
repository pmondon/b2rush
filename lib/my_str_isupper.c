/*
** my_str_isupper.c for my_str_isupper in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 15:03:38 2016 pierre mondon
** Last update Mon Oct 10 15:05:12 2016 pierre mondon
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 90)
	i++;
      else
	return (0);
    }
  return (1);
}
