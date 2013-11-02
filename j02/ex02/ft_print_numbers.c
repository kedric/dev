void	ft_print_numbers(void)
{
  int i = 0;
  
  while(i < 10)
    {
      ft_putchar(48 + i);
      i++;
    }
}

int	main()
{
  ft_print_numbers();
}
