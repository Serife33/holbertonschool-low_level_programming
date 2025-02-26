#include "main.h"
#include <stdio.h>

/**
 * _puts - put the words
 *
 * @str: character to print
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
