#include "3-calc.h"
/**
 * op_add - Add two numbers
 *
 * @a: first number
 * @b: second number
 * Return: result of add
 */
int op_add(int a, int b)
{
	int res;

	res = a + b;
	return (res);
}
/**
 * op_sub - Subs two numbers
 *
 * @a: first number
 * @b: second number
 * Return: result of subs
 */
int op_sub(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}
/**
 * op_mul - mult two numbers
 *
 * @a: first number
 * @b: second number
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}
/**
 * op_div - division of two numbers
 *
 * @a: first number
 * @b: second number
 * Return: result of division
 */
int op_div(int a, int b)
{
	int res;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = a / b;
	return (res);
}
/**
 * op_mod - modul of two numbers
 *
 * @a: first number
 * @b: second number
 * Return: result of modul
 */
int op_mod(int a, int b)
{
	int res;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = a % b;
	return (res);
}
