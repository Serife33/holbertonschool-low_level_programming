#include <stdio.h>
/**
 * main - alphabet with putchar
 *
 * Return: turns 0
 */
int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
