#include<stdio.h>

/**
 * main - entry point
 * @argc: an integer
 * @argv: a double pointer
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", argv[0]);
	return (0);
}
