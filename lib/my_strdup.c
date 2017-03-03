/*
** my_strdup.c for my_strdup in /home/mondon_p/CPool_Day08
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Wed Oct 12 13:57:34 2016 pierre mondon
** Last update Tue Dec 20 11:30:35 2016 pierre mondon
*/

#include <stdlib.h>
#include "my.h"

char	*my_strdup(char *src)
{
  char	*str;
  int	i;

  i = my_strlen(src);
  str = malloc(sizeof(char) * (i + 1));
  my_strcpy(str, src);
  return (str);
}
