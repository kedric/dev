void	ft_print_comb(void)
{
  int i;

  i = 000;

  while(i <= 789)
    {
      if(i / 100 < i / 10 % 10 && i / 10 % 10 < i % 10)
	{
	  ft_putchar('0' + i / 100);
	  ft_putchar('0' + i / 10 % 10);
	  ft_putchar('0' + i % 10);
	  if(i < 789)
	    {
	      ft_putchar(' ');
	      ft_putchar(';');
	    }
	}
      i++;
    }
}
int	main()
{
  ft_print_comb();
}
