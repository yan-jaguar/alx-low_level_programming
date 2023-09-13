#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@num: int to get last digit from
 *
 *Return: last digit
 */

int print_last_digit(int num)
{
	int a;

	a = num % 10;
	if (num < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
