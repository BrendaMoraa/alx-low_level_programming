#include <stdio.h>

/**
 * main - Entry point to print numbers from 0 to 9.
 *
 * Return: All the time 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
