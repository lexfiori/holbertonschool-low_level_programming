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
	int i, v = 0, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				v = atoi(argv[i]);
				sum += v;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
