/*
** my_strcapitalize.c for my_strcapitalize in /home/mondon_p/CPool_Day06
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Mon Oct 10 14:11:02 2016 pierre mondon
** Last update Mon Oct 10 14:14:49 2016 pierre mondon
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i - 1] == 32 && str[i] >= 97 && str[i] <= 122)
	{
	  str[i] = str[i] - 32;
	}
      my_putchar(str[i]);
      i++;
    }
}
