#include "main.h"

/**
 * _strspn - the entry point
 * @a: The input
 * @accept: The input
 *
 * Return: Always 0
 */
unsigned int _strspn(char *a, char *accept)
{
	unsigned int bytes = 0;
	int x;

	while (*a)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*a == accept[x])
			{bytes++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (bytes);
		}
		a++;
	}
	return (bytes);
}
