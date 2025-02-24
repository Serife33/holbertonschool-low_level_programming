#include <stdio.h>
#include "main.h"
/**
 * _isupper - check lowercase and uppercase letter.
 *
 * @c: the character to check
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
