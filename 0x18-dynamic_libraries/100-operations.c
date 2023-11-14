#include <stdio.h>

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: Difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: First integer (numerator)
 * @b: Second integer (denominator)
 * Return: Result of division of a by b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the remainder of the division of two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 * Return: Remainder of the division of a by b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}

