#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check lowercase and uppercase letter.
 *
 * @c: the character to check
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
