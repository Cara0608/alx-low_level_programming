#include<stdio.h>

/**
 * main - entry point of the program
 *
 * Return: By default returns 0 if no error otherwise prints a non-zero value
 *
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter ++)
		putchar(letter);
	putchar('\n');
	return (0);
}
