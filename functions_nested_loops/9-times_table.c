#include <stdio.h>
#include "main.h"
/**
 * times_table  - print times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + result);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
