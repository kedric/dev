void	ft_print_alphabet(void)
{
  int i = 0;

  while ( i < 26 )
	{
	  ft_putchar(97 + i);
	  i++;
	}
}

int	main()
{
  ft_print_alphabet();
}
