#include "holberton.h"
/**
 * read_textfile - Reads a text file and prints iti to the POSIX stdout
 * @filename: text file to read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t readcount = 0;
	ssize_t writecount = 0;


	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0400);
	if (fd == -1)
		return (0);
	readcount = read(fd, buffer, letters);
	if (readcount == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	writecount = write(STDIN_FILENO, buffer, readcount);
	if (writecount == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (writecount);
}
