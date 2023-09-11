#include <stdio.h>

/**
 * main - will print the alphabet
 *
 * Return: 0 Always
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxy";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alp[a]);
	}
	putchar('\n');
	return (0);
}
