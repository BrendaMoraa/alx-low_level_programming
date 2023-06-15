#include <stdio.h>
#include <unistd.h>

/**
* main - A program that prints exact text followed by a new line to the standart error
*
* Return: Always 1 (Success)
*/
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
