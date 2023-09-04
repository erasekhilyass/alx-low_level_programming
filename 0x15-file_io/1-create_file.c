#include "main.h"
/**
 * create_file - A FUN THAT Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: return  --1 If the function fails. AND otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x, lenGTH = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenGTH = 0; text_content[lenGTH];)
			lenGTH++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, lenGTH);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
