#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mod - module two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

/**
 * op_mul - ...
 * @a: ...
 * @b: ...
 *
 * Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - ...
 * @a: ...
 * @b: ...
 *
 * Return: ...
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}
