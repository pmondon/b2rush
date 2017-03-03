/*
** projet.h for projet in /home/mondon_p/PSU_2016_my_printf
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Fri Nov 11 12:40:06 2016 pierre mondon
** Last update Sun Feb 26 18:37:42 2017 pmondon
*/

#ifndef PRINTF_H_
#define PRINTF_H_

typedef struct	s_call
{
  char	c;
  void	(*f)();
}		t_call;

typedef struct	s_size
{
  int	size;
  int	len;
}		t_size;

int	malloc_tab(char ***, int **, char ***, int);
int	is_empty(char ***, int);
int	print_map(int, int, char **);
int	game(char **, t_size, int, int);
char	**change_map(char ***map, int *match);
int	ia(char ***, int, int, int);
int	attack(char ***, int, int, int);
int	my_printf(char *, ...);
char	*get_next_line(int);
#endif
