#include <stdio.h>

void test_tolower()
{
  char *a;
  char *b;

  a = "SAUz2";
  b[0] = ft_tolower(a[0]);
  b[1] = ft_tolower(a[1]);
  b[2] = ft_tolower(a[2]);
  b[3] = ft_tolower(a[3]);
  b[4] = ft_tolower(a[4]);
  b[5] = '\0';
  puts(a);
  puts(b);
 
}

int main()
{
  test_tolower();
}
