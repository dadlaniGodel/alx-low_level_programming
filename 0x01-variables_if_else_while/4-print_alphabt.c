#include <stdio.h>

/**
 * main - main fucntion
 *
 * Return: Return 0 if true
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
