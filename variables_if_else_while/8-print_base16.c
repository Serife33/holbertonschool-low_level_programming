#include <stdio.h>
/**
 * main - numbers in hexadecimal
 *
 * Return: turns 0
 */
int main(void)
{
	int i = '0';
	char ch = 'a';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
