#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be tested
 * @accept: the string to find
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int a = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				a++;
		}
	}
	return (a);
}
