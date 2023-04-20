#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name using the pointer to function
 * @name: name to print
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
