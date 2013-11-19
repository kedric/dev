#include <stdio.h>

void test_toupper()
{
  char *a;
  char *b;

  a = "sauZ2";
  b[0] = ft_toupper(a[0]);
  b[1] = ft_toupper(a[1]);
  b[2] = ft_toupper(a[2]);
  b[3] = ft_toupper(a[3]);
  b[4] = ft_toupper(a[4]);
  b[5] = '\0';
  puts("test ft_toupper :");
  printf("%s > %s\n",a,b);
}


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
  puts("test ft_tolower :");
  printf("%s > %s\n",a,b); 
}

int main()
{
  test_tolower();
  test_toupper();
ls
}
