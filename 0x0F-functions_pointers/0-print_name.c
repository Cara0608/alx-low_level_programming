#include <stdio.h>
#include "functions_pointers.h"

/**
 * print_name- prints name
 * @name: Name of person
 * @f: pointer to function that returns nothijg but returns a name
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *));
{
	if (f != NULL)
	{
		f(name);
	}
}
