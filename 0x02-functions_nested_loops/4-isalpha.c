#include "main.h"
/**
  *_isalpha - checks letter ,lowercase , uppercase
  * @c: the character to be checked
  *Return: 1 if c is a letter, lowercase or uppercase or 0 for anything else
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
