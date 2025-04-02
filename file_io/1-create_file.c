#include "main.h"
#include <fcntl.h>      /* for open */
#include <unistd.h>     /* for write, close */
#include <stdlib.h>

/**
* create_file - Creates a file and writes text content to it
* @filename: Name of the file to create
* @text_content: NULL-terminated string to write to the file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t w_bytes;

	int length = 0;


	if (filename == NULL)
		return (-1);


	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}


	while (text_content[length] != '\0')
	length++;


	w_bytes = write(fd, text_content, length);
	if (w_bytes != length || w_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
