#include "main.h"
/**
 * _abs - prints the absolute value of any integer
 * @a: the int to be checked
 * Return: returns the value of int
 */

int _abs(int a)
{
	if (a > 0)
		a = a;
	else if (a < 0)
		a = -(a);
	return (a);
}
