/*
** get_next_line.c for get_next_line in /home/mondon_p/CPE_2016_matchstick
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Tue Feb 14 10:53:35 2017 pierre mondon
** Last update Sat Feb 25 20:21:06 2017 pmondon
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/projet.h"

char	*get_next_line(int fd)
{
  char	*res;
  int	i;
  int	check;
  char	*str;

  if ((str = malloc(sizeof(char) * 1000)) == NULL)
    return NULL;  
  if ((res = malloc(sizeof(char) * 1000)) == NULL)
    return NULL;
  if ((check = read(fd, str, 1)) == -1)
    return NULL;
  if (str[0] == '\n')
    return ("\n");
  i = 0;
  while (str[i] != '\n' && str[i] != 0)
    {
      if ((check = read(fd, res, 1)) == -1)
	return NULL;
      str = my_strcat(str, res);
      i++;
    }
  str[i] = 0;
  if (str[0] == 0)
    return NULL;
  return str;
}
