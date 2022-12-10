#include<stdio.h>
/**
 * main - serves as the entry point for the program
 *
 * Return: By default returns 0 if no error otherwise returns a nom-zero value
 *
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
