#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers  - numbers with _putchar
 *
 * Return: turns 0
 */
void print_most_numbers(void)
{
	int i;
		for (i = '0'; i <= '9'; i++)
		{
			if (i == '2' || i == '4')
			{
				continue;
			}
			_putchar(i);
		}
	_putchar('\n');
}
