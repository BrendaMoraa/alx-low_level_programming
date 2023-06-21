#include "main.h"


	/**
	 * print_alphabet_10 - prints 10 times the alphabet lowercase
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
