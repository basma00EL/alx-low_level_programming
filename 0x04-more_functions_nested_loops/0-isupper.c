#include "main.h"

/**
* _isupper - check for uppercase letters
* @c : the number to be checked
* Return: 1 if c is uppercase or 0 for any else
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
