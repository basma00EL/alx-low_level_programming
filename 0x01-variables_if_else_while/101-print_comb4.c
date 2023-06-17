#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Print all possible combination for 3 digit numbers '
  *Return: 0
*/
int main(void)
{
	int n;
	int i;
	int j;

	for (n = 0; n < 8; n++)
	{
		for (i = n + 1; i < 9; i++)
		{
			for (j = i + 1; j < 10; j++)
			{
				putchar((n % 10) + '0');
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');

				if (n == 7 && i == 8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

