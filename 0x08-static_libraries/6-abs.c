#include"holberton.h"

/**
 * _abs - absolute value of an integer
 * @n: an integer
 (*
 * Description: absolute value
 (* section header: Section description)*
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	return (n);
}
