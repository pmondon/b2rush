/*
** my_str_isalpha.c for my_str_isalpha in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 14:46:19 2016 pierre mondon
** Last update Mon Oct 10 14:50:49 2016 pierre mondon
*/

int	my_str_isalpha(char *str)
{
  int	i;

  while (str[i] != '\0')
    {
      if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
	  i++;
      else
	return (0);
    }
  return (1);
}
