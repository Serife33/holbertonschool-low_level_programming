#include <stdio.h>
#include "main.h"
/**
 * _islower - find lowercase letter.
 *
 * c - is parameter
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
