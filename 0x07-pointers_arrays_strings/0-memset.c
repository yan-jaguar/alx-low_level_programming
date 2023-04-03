#include <stdio.h>
#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @a: area of memory to be filled
 * @b: character to fill the area with
 * @n: number of bytes to fill
 * Return: char*
 */
char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (a);
}
