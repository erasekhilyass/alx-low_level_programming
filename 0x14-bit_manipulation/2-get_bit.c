#include "main.h"

/**
 * get_bit - thee f that returns the value of a bit at an index in a decimal number
 * @n: represents thee number to search
 * @index: index of the bit
 * Return: it should return thee value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
