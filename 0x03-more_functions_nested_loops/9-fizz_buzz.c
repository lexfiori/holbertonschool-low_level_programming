#include <stdio.h>

/**
 * main - main entry for Fizzbuzz
 *
 * Description - prints Fizz for mult of 3, Buzz for mult of 5, Fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (((n % 3) == 0) && ((n % 5) == 0))
		{
			printf("Fizzbuzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	putchar('\n');
	return (0);
}
