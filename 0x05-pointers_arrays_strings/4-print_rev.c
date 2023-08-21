#include "main.h"
/**
 * print_rev -  prints a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int lengh = 0;
	int O;

	while (*s != '\0')
	{
		lengh++;
		s++;
	}
	s--;
	for (O = lengh; o > 0; O--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

