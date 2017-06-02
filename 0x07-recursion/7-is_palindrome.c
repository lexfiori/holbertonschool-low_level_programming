#include "holberton.h"

/**
 * length  - function that returns true if palindrome
 * @s: a string of characters
 *
 * Return: 0
 */

int length(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		length(++s);
	}
	return (count);
}

/**
 * wring_it_in - wrings it in
 * @s: a pointer to a string of characters
 * @n: an integer
 * @k: an integer
 *
 * Return: 0
 */

int wring_it_in(char *s, int n, int k)
{
	if (s[n - k] == s[n] && ((n - k) < 2))
	{
		wring_it_in(s, n--, k++);
	}
	if ((n - k) == 1 || (n - k) == 0)
	{
		return (1);
	}
	return (0);
}

/**
 * is_palindrome - is it a palindrome?
 * @s: a pointer to a string
 *
 * Return: 0
 */

int is_palindrome(char *s)
{
	int n = length(*s);
	int k = n - 1;

	if (*s != '\0')
	{
		if (wring_it_in(s, n, k))
		{
			return (1);
		}
	}
	return (0);
}
