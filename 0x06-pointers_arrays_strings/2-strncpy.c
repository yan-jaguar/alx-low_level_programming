#include "main.h"
#include <stdio.h>

/**
 **_strncpy -  copies a string
 *@dest: pointer to the string
 *@src: pointer
 *@n: interger
 *Return: Destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
