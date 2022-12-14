#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number of the sign to be printed
 * Return: 1 if number is greater thanzero
 * 0 if number is zero
 * -1 if number is less than zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
