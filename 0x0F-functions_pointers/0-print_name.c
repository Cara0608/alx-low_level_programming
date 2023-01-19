#include <stdio.h>
#include "function_pointers.h"

/**
 * print_namez prints a name
 * @f: a function to pointer that prints a name but returns nothing
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *));
{
	if (!name || !f) /* if any is NULL */	
		return;
	
	f(name);
}
