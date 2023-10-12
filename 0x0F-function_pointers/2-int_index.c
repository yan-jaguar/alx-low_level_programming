#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of intergers
 * @size: number of elements in array
 * @cmp: pointerto function used to compare values
 * Return: index of first element
 * if no element matches, return -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, re;

	re = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (re);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				re = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (re);
			}
		}
	}
	return (re);
}
