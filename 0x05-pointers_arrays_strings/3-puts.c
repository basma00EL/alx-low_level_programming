#include "main.h"
/**
* _puts - prints a string followed by new line to stdout
* @str : string to print
* Return: 0 (success)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
