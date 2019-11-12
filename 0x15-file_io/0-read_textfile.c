#include "holberton.h"
/**
 * read_textfile - read and print a textfile
 * @filename: filename
 * @letters: number of letters that will be readed
 * Return: number of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char buf[letters];

	fd = open(filename, O_RDONLY, 0400);
	if (fd == -1)
		return (0);

	r = read(fd, buf, letters);
	if (r == -1)
	{
		close(fd);
		return (0);
	}

	w = write(1, buf, r);

	close(fd);

	return (w);
}
