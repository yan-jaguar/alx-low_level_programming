#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always (0)
 */

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A' ; a <= 'Z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
