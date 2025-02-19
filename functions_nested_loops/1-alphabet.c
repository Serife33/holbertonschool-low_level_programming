#include <stdio.h>
#include "main.h"
/**
 * print_alphabet  - alphabet with _putchar
 *
 * Return: turns 0
 */
void print_alphabet(void)
{
	char ch = 'a';
		for (; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
}
