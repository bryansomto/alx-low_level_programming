#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: actual number of letters it reads and print
 */

int create_file(const char *filename, char *text_content)
{
	int i, fd, txt;
	char *buf;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 1; text_content[i] != '\0'; i++)
			;

	txt = write(fd, text_content, i);

	close(fd);

	return (1);
}
