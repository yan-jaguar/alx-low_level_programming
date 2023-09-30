#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer to a 8x8 array of character
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
