#include "main.h"

/**
 * binary_to_uint - transforms a binary number to unsigned int
 * @b: string with the binary number
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decVal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decVal = 2 * decVal + (b[i] - '0');
	}

	return (decVal);
}
