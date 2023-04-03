#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: the destination buffer
 * @src:the source buffer
 * @n: unsigned int.
 * Return: always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
