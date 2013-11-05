void	ft_affiche(int n, int j)
{
  ft_putchar('0' + n / 10);
  ft_putchar('0' + n % 10);
  ft_putchar(' ');
  ft_putchar('0' + j / 10);
  ft_putchar('0' + j % 10);
  if(n != 98)
    {
      ft_putchar(',');
      ft_putchar(' ');
    }
  else
    {
      ft_putchar('\n');
    }
}
void	ft_print_comb2(void)
{
  int i[2];

  i[0] = 0;
  
  while(i[0] < 99)
    {
      i[1] = 0;
      while(i[1] <= 99)
	{
	  if (i[0] < i[1])
 	    {
	      ft_affiche(i[0],i[1]);
 	    }
	  i[1]++;
	 }
      i[0]++;
    }
}
int	main()
{
  ft_print_comb2();
}
