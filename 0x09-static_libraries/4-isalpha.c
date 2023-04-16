#include "main.h"
/**
 * _strspn - Entry point
 * @a: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *a, char *accept)
{
	unsigned int n = 0;
	int j;

	while (*a)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*a == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		a++;
	}
	return (n);
}
