#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns 0
*/

int print_last_digit(int n)
{

int lastd = n % 10;

if (lastd < 0)
lastd *= -1;

_putchar (lastd + '0');
return (lastd);
}
