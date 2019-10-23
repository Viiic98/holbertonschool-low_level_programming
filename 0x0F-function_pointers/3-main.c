#include "3-calc.h"
/**
 * main - Receive arguments
 *
 * @argc: number of arguments
 * @argv: array that contain the value of arguments
 *
 * Return: print the result of the operation
 */
int main(int argc, char *argv[])
{
	int num1, num2, (*op)(int, int), calc;
	char *operator;

	if (argc > 4 || argc <= 1)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	op = get_op_func(operator);

	if (op == '\0')
	{
		printf("Error\n");
		exit(99);
	}

	calc = op(num1, num2);
	printf("%d\n", calc);
	return (0);
}
