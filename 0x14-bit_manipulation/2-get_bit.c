#include "main.h"
/**
 * get_bit - a fun that returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_valeur;

	if (index > 63)
		return (-1);

	bit_valeur = (n >> index) & 1;

	return (bit_valeur);
}
