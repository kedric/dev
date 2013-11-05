void	ft_is_negative(int n)
{
  if(n >= 0)
    {
      ft_putchar('P');
    }
  else
    {
      ft_putchar('N');
    }
}
int	main()
{
  ft_is_negative(3);
}
