#include "holberton.h"

/**
 * append_text_to_file - appens text at the end of a file
 * @filename: name of file
 * @text_content: null terminated string to add at end of file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t i = 0;
	ssize_t writecount;
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[i] != 0)
		i++;
	writecount = write(fd, text_content, i);
	if (writecount == -1)
		return (-1);
	close(fd);
	return (1);
}
