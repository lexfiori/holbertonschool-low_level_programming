#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - this is a
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int m, k;

	for (m = 48; m <= 57; m++)
	{
		for (k = 48; k <= 57; k++)
		{
			putchar (m);
			putchar (k);
			if (k != 57 || m!= 57)
			{
				putchar (32);
				putchar (44);
			}
		}
	}
	putchar (10);
	return (0);
}
