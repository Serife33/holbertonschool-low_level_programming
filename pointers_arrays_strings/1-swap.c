#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * @a: the value to check
 *
 * @b: the value
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *b;
	*b = *a;
	*a = temp;
}
