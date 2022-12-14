#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - ckeck the code
 *
 * Return: 0 if no error
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

}
