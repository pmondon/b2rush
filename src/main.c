/*
** main.c for main in /home/pmondon/epitech/rushb2
** 
** Made by pmondon
** Login   <pierre.mondon@epitech.eu>
** 
** Started on  Fri Mar  3 20:20:45 2017 pmondon
** Last update Fri Mar  3 20:25:18 2017 pmondon
*/

#include <stdlib.h>
#include <stdio.h>

int	open_file(char **av, int ac)
{
  FILE	*fichier;
  int	*fd;


  if ((fd = malloc(sizeof(int) * ac + 1)) == NULL)
    return 84;
  if((fichier = fopen(av[1], "rw+")) == NULL)
    return 84;
  
  return 0;
}

int	main(int ac, char **av)
{
  if (ac < 3)
    return 84;
  return (open_file(av, ac));
}
