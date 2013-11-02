void	ft_print_reverse_alphabet(void)
{
  int i = 25;

    while(i >= 0)
      {
	ft_putchar(97 + i);
	i--;
      }
}

int	main()
{
  ft_print_reverse_alphabet();
}
