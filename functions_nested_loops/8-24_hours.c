#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer - print time.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			putchar('0' + hour / 10);
			putchar('0' + hour % 10);
			putchar(':');
			putchar('0' + min / 10);
			putchar('0' + min % 10);
			putchar('\n');
		}
	}

}
