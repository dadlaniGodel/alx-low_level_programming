#include <stdio.h>

/**
 * main - This is the main funciton
 *
 * Return: Output 0 if result is true
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("\nSize of an int: %ld byte(s)\n", sizeof(int));
	printf("\nSize of a long int: %ld byte(s)\n", sizeof(long int));
	printf("\nSize of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("\nSize of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
