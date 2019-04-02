#include "holberton.h"

/**
 * main - copies the content of a file to another file
 *
 * Return: 1 on success , exit 98, 99, 100 on error
 */
int main(int ac, char **av)
{
	int closestatus, closestatus2, readcount, fd, fd2;
	char buffer[BUFSIZ];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((readcount = read(fd, buffer, BUFSIZ)) > 0)
		if ((fd2 == -1 || (write(fd2, buffer, readcount) != readcount)))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	if (readcount == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	closestatus = close(fd);
	if (closestatus == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd, %i\n", fd);
		exit(100);
	}
	closestatus2 = close(fd2);
	if (closestatus2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
	return (0);
}
