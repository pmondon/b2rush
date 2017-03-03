/*
** my_revstr.c for my_revstr in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 09:50:08 2016 pierre mondon
** Last update Wed Nov 16 17:23:42 2016 pierre mondon
*/

char	*my_revstr(char *str)
{
  int	i;
  int	n;
  char	swap;

  n = 0;
  i = my_strlen(str) - 1;
  while (n != my_strlen(str) / 2)
    {
      swap = str[n];
      str[n] = str[i];
      str[i] = swap;
      i--;
      n++;
    }
  return (str);
}
