#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *@num: starting point
 *Return: 0
 *
 */

void print_to_98(int num)
{
	if (num <= 98)
	{
		for (num = num; num <= 97; num++)
			printf("%d, ", num);
	}
	else
		for (num = num; num > 98; num--)
			printf("%d, ", num);
	printf("98\n");
}
