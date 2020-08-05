#include "holberton.h"
/**
* create_file - fucntion to creat a text file.
* @filename: poiter to filename.
* @text_content: tex_content.
* Return: integer.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, c, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	for (i = 0; text_content[i]; i++)
	;
	c = write(fd, text_content, i);
	if (c == -1)
		return (-1);
	close(fd);
	return (1);
}
