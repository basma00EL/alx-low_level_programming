#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Print all possible combination for single-digit numbers '
  *Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
