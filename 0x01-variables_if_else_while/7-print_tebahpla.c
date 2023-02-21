#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Return 0 if true
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
