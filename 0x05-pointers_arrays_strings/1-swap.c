#include "main.h"

/**
 * swap_int - function to swap two int
 * @a: int to swap
 * @b: int to swap
*/

void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
