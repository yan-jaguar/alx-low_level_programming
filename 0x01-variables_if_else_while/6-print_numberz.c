#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */

int main(void)
{
	int val;

	for (val = 0; val < 10; val++)
		putchar((val % 10) + '0');

	putchar('\n');
	return (0);
}
