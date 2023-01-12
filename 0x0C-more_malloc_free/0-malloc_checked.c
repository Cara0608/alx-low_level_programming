#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocation memory
 * @b: the size to allocate
 *
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
