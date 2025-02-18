#include <stdio.h>
/**
 * main - alphabet with putchar
 *
 * Return: turns 0
 */
int main(void)
{
	char ch = 'a';
	char c = 'A';
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		for (c = 'A'; c <= 'Z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
		return (0);
}
