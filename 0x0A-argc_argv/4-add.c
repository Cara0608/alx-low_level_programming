#include <stdio.h>
#include <stdlib>
#include <ctype.h>

/**
 * main - main funct
 * @argc: param count
 * @argv; param pointer
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; arg[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum <= atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}