#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: pointer to the array
 * @si: size of the array
 * Return: returns 0
 */
void print_diagsums(int *a, int si)
{
	int i;
	int m = 0, n = 0, p = 1;
	long int b1 = 0, b2 = 0;

	for (i = 0; i < si; i++)
	{
		b1 += a[(si * n) + n];
		n++;
	}
	for (i = 0; i < si; i++)
	{
		b2 += a[(si * m) + (si - p)];
		m++;
		p++;
	}
	printf("%ld, %ld\n", b1, b2);
}
