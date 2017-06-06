#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: an integer
 * @argv: a pointer to a char argument
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y, mult;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mult = (x * y);
		printf("%i\n", mult);
	}

	return (0);
}
