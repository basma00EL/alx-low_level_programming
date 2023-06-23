#incluse "main.h"
/**
* _isdigit - check if character is a digit
* @c: number to be calculated
*Return: 1 if it is a digit and 0 for any else
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
