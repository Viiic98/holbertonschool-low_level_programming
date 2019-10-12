#include "holberton.h"
/**
 * main - Store the arguments
 *
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: Display number of arguments
 */
int main(int argc, char *argv[])
{
	argc--;
	(void) argv;
	_putchar(argc + '0');
	_putchar('\n');
	return (0);
}
