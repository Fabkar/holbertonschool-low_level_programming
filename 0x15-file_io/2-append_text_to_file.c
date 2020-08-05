#include "holberton.h"
/**
* append_text_to_file - fucntion to append at the end of a file.
* @filename: poiter to filename.
* @text_content: tex_content.
* Return: integer.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, c, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_APPEND | O_RDWR, 0664);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i]; i++)
	;
	c = write(fd, text_content, i);
	if (c < 0)
		return (1);
	close(fd);
	return (1);
}
