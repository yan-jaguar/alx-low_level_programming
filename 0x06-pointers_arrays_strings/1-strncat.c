#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings.
 * @dest: pointer destination
 * @src: source destination
 * @n: number of bytes
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{

	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];


	dest[dest_len + i] = '\0';

	return (dest);
}
