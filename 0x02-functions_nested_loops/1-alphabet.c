#include"holberton.h"

/**
 * print_alphabet - print alphabet
 * 
 *
 * Description: prints the alphabet
 * section header: void print_alphabet(void))*
 * Return: 0 
 */

void print_alphabet(void)
{
        char c;
        for (c = 'a'; c <= 'z'; c++)
        {
                _putchar(c);
        }
	_putchar('\n');
}
