#include "main.h"

/**
 * print_alphabet_x10 - prints 10 thimes the alphabet in lowercase
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int s;
	char i;

	for (s = 1 ; s <= 10 ; s++)
	{
		for (i  = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
