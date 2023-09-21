#include "main.h"

/**
 *swap_int - swaps the values of two integers.
 *@a: first pointer
 *@b: second pointer
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
