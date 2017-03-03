/*
** my_strncpy.c for my_strncpy in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 09:44:03 2016 pierre mondon
** Last update Mon Oct 10 09:49:12 2016 pierre mondon
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  dest[n] = '\0';
  while (n > 0)
    {
      dest[i] = src[i];
      i++;
      n--;
    }
  return (dest);
}
