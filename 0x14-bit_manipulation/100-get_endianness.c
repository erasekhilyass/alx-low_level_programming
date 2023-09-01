#include "main.h"
/**
 * get_endianness - a f that checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *cp = (char *) &l;

	return (*cp);
}
