#include "main.h"
/**
* rev_string - reverse a string
* @s : input string
* Return :string in reverse
*/
void rev_string(char *s)
{
	char rev = s[0];
	int temp = 0;
	int i;

	while (s[temp] != '\0')
		temp++;
	for (i = 0; i < temp; i++)
	{
		temp--;
		rev = s[i];
		s[i] = s[temp];
		s[temp] = rev;
	}
}
