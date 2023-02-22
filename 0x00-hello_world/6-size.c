#include <stdio.h>

/**
 * main - This is the main funciton
 *
 * Return: Output 0 if result is true
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("\nSize of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("\nSize of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("\nSize of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("\nSize of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
