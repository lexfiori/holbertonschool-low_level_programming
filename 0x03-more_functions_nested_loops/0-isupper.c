#include "holberton.h"

/**
* _isupper - returns 1 if upper
* @c: an integer
*
* Description - returns 1 or 0 if upper
* Return: 0 or 1 depending
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
		}
	else
	{
		return (0);
	}
}
