#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Print all numbers of base 16'
  *Return: 0
*/
int main(void)
{
	char n;
	char l;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
