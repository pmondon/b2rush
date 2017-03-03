/*
** my_getnbr.c for my_getnbr in /home/mondon_p/CPool_Day07/lib/my
** 
** Made by pierre mondon
** Login   <mondon_p@epitech.net>
** 
** Started on  Tue Oct 11 11:12:41 2016 pierre mondon
** Last update Tue Dec 20 11:32:25 2016 pierre mondon
*/

int	my_getnbr(char *str)
{
  int	nb;
  int	i;
  int	signe;

  signe = 0;
  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 58 && str[i] > 47)
	{
	  nb *= 10;
	  nb += str[i] - 48;
	}
      i++;
    }
  i = 0;
  while (str[i] != 0)
    {
      if (str[i++] == 45)
	signe++;
    }
  if (signe % 2 == 1)
    nb *= -1;
  return (nb);
}
