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
	int c = 0;
	int count = 0;

	while (s[c] != '\0')
	{
		count++;
		c++;
	}
	return (count);
}
