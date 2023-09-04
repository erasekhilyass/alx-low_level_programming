#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - A FUNCTION THAT ReadS text fileS & print to STDOUT.
 * @filename: text file being read.
 * @letters: number of letters to be read.
 * Return: IT SHOULD RETURN THE  actual number of bytes read and printed. AND 0 when THE function fails or WHEN THE filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufFER;
	ssize_t fd;
	ssize_t w;
	ssize_t x;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bufFER = malloc(sizeof(char) * letters);
	x = read(fd, bufFER, letters);
	w = write(STDOUT_FILENO, bufFER, x);

	free(bufFER);
	close(fd);
	return (w);
}
