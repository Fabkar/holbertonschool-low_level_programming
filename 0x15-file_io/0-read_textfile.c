#include "holberton.h"
/**
* read_textfile - fucntion to read a tex file and prints it.
* @filename: poiter to filename.
* @letters: number to letters to read and prints.
* Return: actual numbers of letters.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n = read(fd, buffer, letters);

	if (n == -1)
	{
		free(buffer);
		return (0);
	}
	n = write(STDOUT_FILENO, buffer, n);
	close(fd);
	free(buffer);
	return (n);
}
