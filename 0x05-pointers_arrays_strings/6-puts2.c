#include "main.h"
/**
* puts2 - prints every other character of a string followed by a new line
* @s : input string
* Return : print
*/
void puts2(char *s)
{
	int length = 0;
	int t = 0;
	char *y = s;
	int i;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
