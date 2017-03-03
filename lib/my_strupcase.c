/*
** my_strupcase.c for my_strupcase in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 13:36:08 2016 pierre mondon
** Last update Mon Oct 10 14:04:47 2016 pierre mondon
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (97 <= str[i] && str[i] <= 122)
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
