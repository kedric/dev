void	ft_putnbr(int n)
{
  if( n < 10 && n > 0)
    {
      ft_putchar('0' + n);
    }
  else if( n > 10)
    {
      ft_putnbr(n / 10);
      ft_putchar('0' + n % 10);
    }
  else if(n < 0)
    {
      ft_putchar('-');
      ft_putnbr(-n);
    }
}