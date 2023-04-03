#include "main.h"
#include <stdio.h>

/**
* _strspn - function that gets the length of a prefix substring
* @s: the string to be tested
* @a: the string to find
* Return: returns the number of bytes
*/
unsigned int _strspn(char *s, char *a)
{
	unsigned int m, n;
	unsigned int c = 0;

	for (m = 0; s[m] != 0; m++)
	{
		if (s[m] == ' ')
			break;
		for (n = 0; a[n] != 0; n++)
		{
			if (s[m] == a[n])
				c++;
		}
	}
	return (c);
}
