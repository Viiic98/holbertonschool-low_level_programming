#include "holberton.h"
/**
 * read_textfile - read and print a textfile
 * @filename: filename
 * @letters: number of letters that will be readed
 * Return: number of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n = 0;
	char buf[letters];

	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return (0);

	read(fd, buf, letters);
	buf[letters] = '\0';

	printf("%s\n", buf);

	while(buf[n])
		n++;

	close(fd);

	return (n);
}
