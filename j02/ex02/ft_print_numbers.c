void ft_print_numbers(void)
{
  int i;

  i = 0;
  while(i < 10)
    {
      ft_putchar('0' + i);
      i++;
    }
  ft_putchar('\n');
}

int main(void)
{
  ft_print_numbers();
}
