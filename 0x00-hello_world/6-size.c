#include <stdio.h>

/**
 * main - Prints the size of various type
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of char: %a byte(s)", sizeof(char));
	printf("Size of int: %a byte(s)", sizeof(int));
	printf("Size fo long int: %a byte(s)", sizeof(long int));
	printf("Size of long long int: %a byte(s)", sizeof(long long int));
	printf("Size of float: %a byte(s)", sizeof(float));
	return (0);

}
