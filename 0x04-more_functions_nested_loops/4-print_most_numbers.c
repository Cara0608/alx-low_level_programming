#include "main.h"

/**
 * print_most_numbers -  this prints most number
 */

void print_most_numbers(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		if (y != 2 && != 4)
			_putchar(y + '0');
	}
	_putchar('\n');
}
