#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10  - alphabet with _putchar 10 times
 *
 * Return: turns 0
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
