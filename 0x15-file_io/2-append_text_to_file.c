#include "holberton.h"
/**
 * append_text_to_file - Add text at the end
 * @filename: filename
 * @text_content: Text that will be added
 * Return: 1 if success, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, n = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[n])
			n++;
		w = write(fd, text_content, n);
		if (w == -1 || w != n)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
