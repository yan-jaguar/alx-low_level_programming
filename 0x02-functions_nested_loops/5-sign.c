#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: int to be checked
 * Return: 1 and print + if a is greater than 0
 * 0 and print - if a is grater than 0
 * -1 and print -if ais less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
	}
	return (-1);
}
