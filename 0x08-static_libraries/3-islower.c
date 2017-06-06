#include "holberton.h"

/**
 * _islower - prints lowercase letters
 * @c: an integer
 *
 * Description: prints lowercase letters
 * section head: Section description
 * Return: 1 or 0 depending
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
