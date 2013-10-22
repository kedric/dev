void ft_putchar(char c);

void ft_putnbr(int i)
{
  if(i >= 0)
    {
      if(i >= 10)
	{
	  ft_putnbr(i / 10);
	  ft_putchar(i % 10 + '0');
	}
      else
	{
	  ft_putchar('0' + i);
	}
    }
  else
    {
      ft_putchar('-');
      ft_putnbr(-i);
    }
}
