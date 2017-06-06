#include "holberton.h"

/**
 * _isdigit - checks if a digit is 0 or 9
 * @c: integer
 *
 * Return: 1 or 0 depending
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
