#include "main.h"
#include <stdio.h>

/**
* _strpbrk - function that searches a string for any of a set of bytes
* @s: string to be searched
* @a: string with the pattern to be matched
* Return: returns a pointer to the byte in s that matches one of the bytes
* in a, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *a)
{
	int m, n;

	for (m = 0; s[m] != 0; m++)
	{
		for (n = 0; a[n] != 0; n++)
		{
			if (s[m] == a[n])
			{
				return ((s + m));
			}
		}
	}
	return (NULL);
}
