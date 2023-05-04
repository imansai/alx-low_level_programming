#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to be evaluated
 * @index: the bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	if (index > 63)
		return (-1);

	bitVal = (n >> index) & 1;

	return (bitVal);
}
