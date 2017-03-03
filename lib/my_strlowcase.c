/*
** my_strlowcase.c for my_strlowcase in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 14:06:15 2016 pierre mondon
** Last update Mon Oct 10 14:09:20 2016 pierre mondon
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 97)
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
