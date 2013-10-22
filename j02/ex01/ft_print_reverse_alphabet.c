void ft_print_reverse_alphabet(void)
{
  int i;

  i = 0;
  while(i < 26)
    {
      ft_putchar('z' - i);
      i++;
    }
  ft_putchar('\n');
}

int main()
{
  ft_print_reverse_alphabet();
  return(0);
}
