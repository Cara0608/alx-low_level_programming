#include "function_pointers.h"
#include <stdio.h>

/**
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return:Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0, i < size, i++)
		action(array[i]);
}