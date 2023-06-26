#include "main.h"
/**
* swap_int - function that swaps two integers
* @a : first integer to swap
* @b : second integer to swap
* Return : 0 (success)
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
