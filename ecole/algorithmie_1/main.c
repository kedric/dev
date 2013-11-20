#include <stdio.h>
void test_strcmp()
{
	char *a;
	char *b;

	a = "salut";
	b = a;

	puts("test ft_strcmp :");
	ft_putnbr(ft_strcmp(a,b));
	ft_putchar(' ');
	a = "salut";
	b = "bonjour";
	ft_putnbr(ft_strcmp(a,b));
	putchar('\n');

}
void test_isalpha()
{
  puts("test ft_isalpha :");
  putchar('0' + ft_isalpha('a'));
  putchar(' ');
  putchar('0' + ft_isalpha('Z'));
  putchar(' ');
  putchar('0' + ft_isalpha('_'));
  putchar('\n');
  
}

void test_isdigit()
{
  puts("test ft_isdigit :");
  putchar('0' + ft_isdigit('0'));
  putchar(' ');
  putchar('0' + ft_isdigit('2'));
  putchar(' ');
  putchar('0' + ft_isdigit('a'));
  putchar('\n');
}

void test_isalnum()
{
  puts("test ft_isalnum :");
  putchar('0' + ft_isalnum('a'));
  putchar(' ');
  putchar('0' + ft_isalnum('2'));
  putchar(' ');
  putchar('0' + ft_isalnum('@'));
  putchar('\n');
}
void test_isascii()
{
  puts("test ft_isascii :");
  putchar('0' + ft_isascii('a'));
  putchar(' ');
  putchar('0' + ft_isascii(128));
   putchar('\n');
} 
void test_isprint()
{
  
  puts("test ft_isprint :");
  putchar(ft_isprint(' ') + '0');
  putchar(' ');
  putchar(ft_isprint('\n') + '0');
  putchar('\n');
}

void test_toupper()
{
  char *a;
  char b[6];

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
  char b[6];

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
	test_strcmp();

	test_tolower();
	test_toupper();
	test_isprint();
	test_isascii();
	test_isalnum();
	test_isdigit();
	test_isalpha();
}
