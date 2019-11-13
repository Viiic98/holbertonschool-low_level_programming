#include "holberton.h"
/**
 * main - Copy a file with the content
 * @ac: number of arguments
 * @argv: arguments
 * Return: 0 if success
 */
int main(int ac, char *argv[])
{
	int f[2], r, w, c;
	char buffer[BUFFER];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f[0] = open(argv[1], O_RDONLY);
	if (f[0] == -1)
		_error_origin(argv[1]);

	f[1] = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (f[1] == -1)
		_error_origin(argv[2]);

	r = read(f[0], buffer, sizeof(buffer));
	if (r == -1)
		_error_origin(argv[1]);

	w = write(f[1], buffer, r);
	if (w == -1)
		_error_copy(argv[2]);

	c = close(f[0]);
	if (c == -1)
		_error_close(argv[1]);

	c = close(f[1]);
	if (c == -1)
		_error_close(argv[2]);

	return (0);
}
/**
 * _error_origin - Print the error for the origin file
 * @file: filename
 */
void _error_origin(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
 * _error_copy - Print the error for the copy file
 * @file: filename
 */
void _error_copy(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
/**
 * _error_close - Print the error when close fails
 * @file: filename
 */
void _error_close(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(100);
}
