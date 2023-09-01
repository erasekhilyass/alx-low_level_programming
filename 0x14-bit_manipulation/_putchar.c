#include "main.h"
#include <unistd.h>
/**
 * _putchar - a FUN that writes the character c to stdout.
 * @c: The character to print.
 * Return: On success 1. in case of an error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
