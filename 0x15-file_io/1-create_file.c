#include "holberton.h"
/**
 * create_file - Create a new file
 * @filename: filename
 * @text_content: text content
 * Return: 1 if success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[n])
			n++;
		write(fd, text_content, n);
	}
	else
		write(fd, "", 0);

	close(fd);
	return (1);
}
