#include <stdio.h>

/**
 * main - print prime
 * Return: 0
 */

int main(void)
{
	unsigned ling int i = 3, n = 612852475143;

	for (1 = 0; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
