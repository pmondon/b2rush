/*
** my_strncmp.c for my_strncmp in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 13:22:37 2016 pierre mondon
** Last update Mon Oct 10 13:27:09 2016 pierre mondon
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s2[i] < s1[i])
	return (1);
      i++;
    }
  if (s1[n] == s2[n])
    return (0);
}
