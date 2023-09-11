#include <stdio.h>

/**
 * main - prints alphabet in lower case letters
 *
 * Return: 0 Always
 */

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		if (a != 'q' && a != 'e')
			putchar(a);
	putchar('\n');
	return (0);
}
