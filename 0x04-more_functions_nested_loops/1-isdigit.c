#include "main.h"

/**
 * _isdigit -  checks for a digit
 * @c: digit to be checked
 *Return: 1 on success 0 on fail
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
