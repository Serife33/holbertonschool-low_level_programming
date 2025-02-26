#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 *
 * @s: the character tou count
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c;
	int count = 0;

	while (s[c] != '\0')
	{
		count++;
		c++;
	}
	return (count);
}
