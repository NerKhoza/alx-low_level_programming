#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: paramter 1
 * @text_content: parameter 2
 * Return: 1 and -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);
	close(fd);

	return (1);
}
