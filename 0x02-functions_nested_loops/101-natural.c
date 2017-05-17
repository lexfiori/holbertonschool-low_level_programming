#include<stdio.h>
/**
 * main - this is the function main
 *
 * Description - this is a description
 *
 * Return: 0
 *
 */

int main(void)
{
	unsigned int n;
	unsigned int j;

	for (n = 0; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			j = j + n;
		}
	}
	printf("%d\n", j);
	return (0);
}
