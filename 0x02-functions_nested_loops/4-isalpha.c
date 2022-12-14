#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: characters to be checked
 *
 * Return: 1 if character is a letter in uppercase, 0 if not
 */

int _isalpha(int c)
{
	if ((c >='a' && x <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
