#include "holberton.h"

/**
 * length - function that returns true if palindrome
 * @string: a string of characters
 *
 * Return: 0
 */

int length(char *string)
{

	if (*string != '\0')
	{
		return (1 + (length(string + 1)));
	}

	else
	{
		return (0);
	}
}

/**
 * wring_it_in - wrings it in
 * @str: a pointer to a string of characters
 * @y: an integer
 * @k: an integer
 *
 * Return: 0
 */

int wring_it_in(char *str, int y, int k)
{
	if (y >= k)
	{
		return (1);
	}
	else if (str[k] == str[y])
	{
		return (wring_it_in(str, y + 1, k - 1));
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
	int n;

	n = length(s);

	return (wring_it_in(s, 0, n - 1));

}
