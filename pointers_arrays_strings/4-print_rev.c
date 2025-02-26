#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse the string
 *
 * @s: character to reverse
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *p;
	char *end;

	p = s;
	while (*p != '\0')
	{
		p++;
	}
	for (end = p - 1; end >= s; end--)
	{
		_putchar(*end);
	}
	_putchar('\n');
}
