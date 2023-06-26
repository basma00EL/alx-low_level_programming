#include "main.h"
/**
* print_rev - prints a string followed by new line in reverse
* @s : string to print
* Return : 0 (success)
*/
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}