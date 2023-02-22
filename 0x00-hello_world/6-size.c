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

	printf("Size of a char: %lu byte(s)\n", sizeof(d));
	printf("\nSize of an int: %lu byte(s)\n", sizeof(a));
	printf("\nSize of a long int: %lu byte(s)\n", sizeof(b));
	printf("\nSize of a long long int: %lu byte(s)\n", sizeof(c));
	printf("\nSize of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
