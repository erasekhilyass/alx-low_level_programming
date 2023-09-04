#include "main.h"
/**
 * append_text_to_file - A FUNCTION THAT Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: it should return --1 If the function fails or filename is NULL and if the file does not exist the user lacks write permissions, and -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	wr = write(p, text_content, len);

	if (p == -1 || wr == -1)
		return (-1);

	close(p);

	return (1);
}
