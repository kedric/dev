void ft_putchar(char c);
void ft_putnbr(int i);

void ft_putcmb(int i, int n, int max_cmb)
{
  int j[n];
  int a;

  a = n;
  while(max_cmb > 10)
    {
      j[n - 1] = i / max_cmb;
      max_cmb = max_cmb / 10;
      n--;
    }
  j[n - 1] = i % 10;
  while(a >= n)
    {
      ft_putnbr(j[n]);
ft_putchar('\n');
      n++;
    }
}

void ft_print_combn(int n)
{
  int max_cmb;
  int i;

  max_cmb = 10;
  i = 1;
  while(i < n)
    {

      max_cmb = max_cmb * 10;
      i++;
    }
  i = 0;
  while(i < max_cmb)
    {
      ft_putcmb(i, n, max_cmb);
      i++;
    }
}
int main()
{

	ft_print_combn(5);
	ft_putchar('\n');  
	return(0);
}
