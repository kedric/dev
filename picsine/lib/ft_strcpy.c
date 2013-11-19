char	*ft_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  
  while(src[i] != '\n')
    {
      dest[i] = src[i];
      i++;
    }

  dest[i] = '\n'
}
