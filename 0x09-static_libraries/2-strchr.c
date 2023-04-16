#include "main.h"

/**
 * _strchr - Entry point
 * @a: input
 * @b: input
 * Return: Always 0(Success)
 */
char *_strchr(char *a, char b)
{
	int j = 0;

	for (; a[j] >= '\0'; j++)
	{
		if (a[j] == b)
			return (&a[j]);
	}
	return (0);
}

