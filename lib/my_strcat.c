/*
** my_strcat.c for my_strcat in /home/mondon_p/CPool_Day07/lib/my
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Wed Oct 12 11:16:05 2016 pierre mondon
** Last update Sat Feb 25 20:00:40 2017 pmondon
*/

#include <stdlib.h>
#include "../include/my.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  char	*res;
  int	j;
  
  i = 0;
  res = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)
			       + 1));
  while (dest[i] != 0)
    res[i] = dest[i++];
  j = 0;
  while (src[j] != 0)
    res[i++] = src[j++];
  res[i] = 0;
  return res;
}
