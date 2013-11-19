int     ft_toupper(int c)
{
  if(c <= 122 && c >= 97)
    {
      return c - 32;
    }
  else
    {
      return c;
    }
}

