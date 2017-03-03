/*
** my_strcmp.c for my_strcmp in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 13:06:37 2016 pierre mondon
** Last update Tue Dec 20 11:29:59 2016 pierre mondon
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] < s2[i])
	  return (-1);
      if (s2[i] < s1[i])
	  return (1);
      i++;
    }
  if (s1[i] == '\0' && s2[i] == '\0')
      return (0);
}
