#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: characters to chack
 *Return: 1 if c is uppercase or lowercase character
 *otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
