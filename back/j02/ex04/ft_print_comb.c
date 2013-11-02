void ft_putnbr(int i);
void ft_putchar(char c);

void ft_print_comb(void)
{
  int i;

  i = 000;
  while(i < 790)
    {
      if(i/100 < i / 10 % 10 && i / 10 % 10 < i % 10 && i < 789)
	{
	ft_putnbr(i/100);
	ft_putnbr(i/10%10);
	ft_putnbr(i%10);
	ft_putchar(',');
	ft_putchar(' ');
	}
     else if(i == 789)
	{
	  ft_putnbr(i);
	}
      i++;
    }
}

int main()
{
  ft_print_comb();
  return(0);
}
