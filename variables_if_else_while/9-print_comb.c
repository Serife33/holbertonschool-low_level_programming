#include <stdio.h>
/**
 * main - numbers in hexadecimal
 *
 * Return: turns 0
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
