#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *ft_memset(void *s, int c, size_t n);
void	test_memset()
{
	char *a;
	char *b;

	puts("test ft_memset :\n");
	a = "salut";
	puts("test ft_memset :\n");
	a = memset(a,47,2);
	ft_putstr(a);
	ft_putchar('\n');
}
void	test_strncmp()
{
	char *a;
	char *b;

	a = "salut";
	b = a;

 	puts("test ft_strncmp :");
	ft_putnbr(ft_strncmp(a,b,2));
	ft_putchar(' ');
	a = "salut";
	b = "bonjour";
	ft_putnbr(ft_strncmp(a,b,2));
	putchar('\n');
}

/*void test_strstr()
{
	char *a;
	char *b;

	a = "salut tu va bien";
	b = "tu";
	ft_putstr("test ft_strstr\n");
	a = ft_strstr(a,b);
	ft_putstr(a);
	ft_putchar('\n');
	}*/

void test_strlen()
{
	char *a;

	a = "salut";
	ft_putstr("test ft_strlen :\n");
	ft_putnbr(ft_strlen(a));
	ft_putchar('\n');
}
void test_strncpy()
{
	ft_putstr("test ft_strncpy :\n");
	char *s2;
	char *s1;
	
	s1 = malloc(20 *sizeof(char));
	s2 = "salut";
	s1 = strncpy(s1,s2, 2);
	ft_putstr(s1);
	ft_putchar('\n');
	
}
void test_strcpy()
{
	ft_putstr("test ft_strcpy :\n");
	char *s2;
	char *s1;
	
	s1 = malloc(20 *sizeof(char));
	s2 = "salut";
	s1 = strcpy(s1,s2);
	ft_putstr(s1);
	ft_putchar('\n');
}
void test_putnbr()
{
	ft_putstr("\ntest ft_putnbr :\n");
	ft_putnbr(72);
	ft_putchar(' ');
	ft_putnbr(-150);
	ft_putchar('\n');
}
void test_putstr()
{
	char *a;

	a = "salut comment tu va";

	puts("test ft_putstr :");
 	ft_putstr(a);
}

void test_putchar()
{
	puts("test ft_putchar :");
 	ft_putchar('a');
 	ft_putchar('c');
 	ft_putchar('*');
	ft_putchar('\n');
} 
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
	test_tolower();
	test_toupper();
	test_isprint();
	test_isascii();
	test_isalnum();
	test_isdigit();
	test_isalpha();
//	test_strstr();
	test_strncmp();
	test_strcmp();
	test_strncpy();
	test_strcpy();
	test_strlen();
	test_memset();
	test_putchar();
	test_putstr();
	test_putnbr();
}
