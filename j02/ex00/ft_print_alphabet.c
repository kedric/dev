void ft_print_alphabet(void)
{
  int i;

  i = 0;
  while(i < 26)
  {
    ft_putchar(i + 'a');
    i++;
  }
  ft_putchar('\n');  
}

int main(void)
{
  ft_print_alphabet();
  return(0);
}
