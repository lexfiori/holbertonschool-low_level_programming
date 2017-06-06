#include <stdio.h>

/**
 * main - Entry point
 * @argc: an integer
 * @argv: a pointer to a char argument
 *
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int count = 0;

	while (argc--)
	{
		count++;
	}
	printf("%d\n", (count - 1));
	return (0);
}
