void ft_putnbr(int i);
void ft_putchar(char c);

void ft_format(int a, int b)
{
 	      ft_putnbr(a / 10);
	      ft_putnbr(a % 10);
	      ft_putchar(' ');
	      ft_putnbr(b / 10);
	      ft_putnbr(b % 10);
	      ft_putchar(',');
	      ft_putchar(' ');
}

void ft_print_comb2(void)
{
  int a;
  int b;

  a = 0;
  while(a < 99)
    {
      b = 0;
      while(b < 100)
	{
	  if(a < b && (a != 98 && b != 99))
	    {
	      ft_format(a,b);
	    }
	  else if( a == 98 && b == 99)
	    {
	      ft_putnbr(a);
	      ft_putchar(' ');
	      ft_putnbr(b);	      
	    }
	  b++;
	}
      a++;
    }
}
