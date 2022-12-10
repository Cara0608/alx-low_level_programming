#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main- seves as main entry point of program
 *
 * Return: By default returns 0 if mo error otherwise returns a non-zero value
 *
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
