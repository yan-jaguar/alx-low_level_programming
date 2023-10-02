#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 *@str: pointer to strings to print
 *Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}

	putchar('\n');
}
