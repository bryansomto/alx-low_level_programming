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
	int i, fd;
	char *buf, *txt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 1; text_content[i] != '\0'; i++)
			;

		buf = malloc(sizeof(char) * (i + 1));

		if (buf == NULL)
			return (-1);

		txt = write(fd, text_content, buf);
	}
	else
	{
		txt = write(fd, "", 1);
	}
	
	close(fd);
	free(buf);
	return (1);
}
