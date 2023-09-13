#include "main.h"

/**
 * print_alphabet - prints the alpha in lowercase and new line
 *
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);
	_putchar('\n');
}
