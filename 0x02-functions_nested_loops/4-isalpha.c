#include"holberton.h"

/**
 * _isalpha - prints letters in ASCII
 * @c: an integer
(*
* Description: lowercase and uppercase letters
(* section header: Section description)*
* Return: 1 or 0 depending
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
