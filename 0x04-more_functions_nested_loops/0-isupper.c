#include "main.h"

/**
 * _isupper function  - uppercase letters
 * @c: char for checking
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

