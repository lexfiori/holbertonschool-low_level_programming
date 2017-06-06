#include <stdio.h>

/**
 * main - Entry point
 * @argc: an integer
 * @argv: a pointer to a char argument
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
