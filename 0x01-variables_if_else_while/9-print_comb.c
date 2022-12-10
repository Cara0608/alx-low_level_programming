#include<stdio.h>

/**
 * main - Serves as the entry point for the program
 *
 * Return: By default returns 0 if no error otherwise returns a non-zero value
 *
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
