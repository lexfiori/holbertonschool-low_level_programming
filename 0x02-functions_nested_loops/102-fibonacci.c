#include <stdio.h>

/**
 * main - entry of main
 *
 * Description - this is a description of main
 *
 * Return: 0 - this is the return
 *
 */

int main(void)
{
	unsigned int i;
	unsigned int n = 1;
	unsigned int j = 0;

	for (i = 1; i <= 50; i++)
	{
		unsigned int l;

		l = j;
		j = n + j;
		n = l;

		printf("%u\n", j);
	}
	return (0);
}
