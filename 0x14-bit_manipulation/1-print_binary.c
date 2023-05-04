#include "main.h"

/**
 * print_binary - writes binary equivalent of decimal number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int currentDec;

	for (i = 63; i >= 0; i--)
	{
		currentDec = n >> i;

		if (currentDec & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
