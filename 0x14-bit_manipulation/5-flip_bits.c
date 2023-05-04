#include "main.h"

/**
 * flip_bits - counts the bit number to be changed
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int currentNum;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		currentNum = exclusive >> i;
		if (currentNum & 1)
			count++;
	}

	return (count);
}
