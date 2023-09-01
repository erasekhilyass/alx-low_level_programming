#include "main.h"
/**
 * binary_to_uint - a func that converts a binary number to unsigned int.
 * @b: string containing the binary number.
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int declare_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		declare_val = 2 * declare_val + (b[i] - '0');
	}

	return (declare_val);
}
