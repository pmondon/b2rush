/*
** my_strstr.c for my_strstr in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 10:25:53 2016 pierre mondon
** Last update Tue Dec 20 11:31:18 2016 pierre mondon
*/

char	*my_strstr(char *str, char *to_find)
{
  int	taille_find;
  int	i;
  int	j;

  j = 0;
  i = 0;
  taille_find = my_strlen(to_find - 1);
  while (str[i] != '\0')
    {
      while (str[i] == to_find[j])
	{
	  j++;
	  i++;
	  if (to_find[j] == '\0')
	    return (str[i] - taille_find);
	}
      i++;
    }
  return (0);
}
