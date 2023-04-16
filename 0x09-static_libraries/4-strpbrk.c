#include "main.h"
/**
 * _strpbrk - Entry point
 * @a: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *a, char *accept)
{
	int j;

	while (*a)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*a == accept[j])
				return (a);
		}
		a++;
	}
	return ('\0');
}
