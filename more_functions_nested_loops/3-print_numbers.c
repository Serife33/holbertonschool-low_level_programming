#include <stdio.h>
#include "main.h"
/**
 * print_numbers  - numbers with _putchar
 *
 * Return: turns 0
 */
void print_numbers(void)
{
	int i;
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
}
