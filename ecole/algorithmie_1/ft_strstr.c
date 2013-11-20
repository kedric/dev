int	ft_verif(char *str, char *to_find)
{
  int i = 0;

  while(str[i] == to_find[i])
    {
      i++;
    }
  if (to_find == '\0')
    {
      return 1;
    }
  else 
    {
      return 0;
    }
}
char	*ft_strstr(char *str, char *to_find)
{
  int i;
  int match;
  
  i = 0;
  match = 0;

  while(str[i] != '\0' || match != 1)
    {
      if (str[i] == to_find[0])
	{
	 match = ft_verif(str[i], to_find);
	}
      if(match != 1)
	{
	  i++;
	}
    }
  if (match == 1)
    {
      return str[i];
    }
  else 
    {
      return 0;
    }
}
