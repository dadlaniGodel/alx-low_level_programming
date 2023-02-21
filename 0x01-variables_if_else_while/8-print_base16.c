#include <stdio.h>

/**
 * main - main function
 *
 * Return: Return 0 if true
 */

int main(void)
{
	int i;
	char alpha;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (alpha = 'a' ; alpha <= 'f' ; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
