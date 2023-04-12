#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of a certain size and assigns char c
 * @size: size of array
 * @c: char to be assigned
 * Description: creates an array of chars, initializes it with a char c
 * Return: pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
