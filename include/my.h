/*
** my.h for my in /home/mondon_p/CPool_Day09
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Thu Oct 13 13:42:47 2016 pierre mondon
** Last update Thu Nov 17 11:02:29 2016 pierre mondon
*/

#ifndef MY_H_
#define MY_H_

int	my_put_place(char *);
int	my_put_binary(int);
int	my_put_octal_spe(char *);
void	my_put_unsigned(unsigned int);
void	my_put_octal(int);
void	my_put_hex(int);
char	*my_strdup(char *);
void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prme(int);
int	my_find_prime_sup(int);
char	*my_strcpy(char *, char *);
char	*my_revstr(char *);
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char *, char *);
int	my_strncmp(char *, char *, int);
char	*my_strupcase(char *);
char	*my_strcapitalize(char *);
char	*my_lowcase(char *);
int	my_str_isalpha(char *);
int	my_str_isnum(char *);
int	my_str_islower(char *);
int	my_str_isupper(char *);
int	my_str_isprintable(char *);
int	my_showstr(char *str);
int	my_showmem(char *, int);
char	*my_strcat(char *, char *);
char	*my_strncat(char *, char *, int);

#endif
