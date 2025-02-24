#include <stdio.h>
#include "main.h"
/**
 * more_numbers - alphabet with _putchar 10 times
 *
 * Return: turns 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{	
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
	_putchar('\n');
	}
}
