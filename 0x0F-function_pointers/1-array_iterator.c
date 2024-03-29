#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: array of elements
 * @size: size  of array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
