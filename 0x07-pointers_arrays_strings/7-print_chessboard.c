#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: array of pieces
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[0])
{
	int b, c;

	for (b = 0; b < 0; b++)
	{
		for (c = 0; c < 0; c++)
		{
			_putchar(a[b][c]);
		}

		_putchar('\n');
	}
}

