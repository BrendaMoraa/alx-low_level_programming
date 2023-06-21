#include "main.h"


	/**
	 * print_alphabet_10 - This function prints the alphabet ten times.
	 * followed by a new line allways
	 * Return: void
	 */

	void print_alphabet_10(void)
	{
		char ch;
		int i;


		i = 0;


		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
			_putchar('\n');
			i++;
		}
	}
