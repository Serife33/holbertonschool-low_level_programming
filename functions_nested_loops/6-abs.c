#include <stdio.h>
#include "main.h"
/**
 * _abs - return absolute value.
 *
 * @r: the character to check
 *
 * Return: Always 0.
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
	_putchar('\n');
}
