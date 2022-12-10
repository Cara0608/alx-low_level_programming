#include<stdio.h>
/**
 * main - serves as entry point of the program
 *
 * Return:By default returns 0 if no errors otherwise returns a non-zero value
 *
 */
int main(void)
{
	char i;

	for(i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
