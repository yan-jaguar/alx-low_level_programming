#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integer
 * @min: minimum
 * @max: maxmum
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, m = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = m++;
	return (arr);
}
