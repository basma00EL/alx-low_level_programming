#include "main.h"
/**
* _abs - prints the absolute value of a number
*@i: number to be calculated
*Return: absolute value or 0
*/
int _abs(int i)
{
	if (i < 0)
	{
		int abs_value;

		abs_value = i * -1;
		return (abs_value);
	}
	return (i);
}
