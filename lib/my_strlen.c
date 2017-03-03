/*
** my_strlengh.c for my_strlengh in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Tue Oct 11 09:01:17 2016 pierre mondon
** Last update Wed Nov 16 17:24:32 2016 pierre mondon
*/

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
