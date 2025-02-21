#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - return absolute value.
 *
 * @r: the character to check
 *
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	_putchar('0' + r);
	return (abs(r) % 10);
}
