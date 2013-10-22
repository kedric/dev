void ft_putchar(char c);

void ft_is_negative(int a)
{
  if(a >= 0)
    {
      ft_putchar('P');
      ft_putchar('\n');
    }
  else if(a < 0)
    {
      ft_putchar('N');
      ft_putchar('\n');
    }
}

int main(void)
{
 ft_is_negative(5);
  ft_is_negative(-5);
  ft_is_negative(0);
  return(0);
}
