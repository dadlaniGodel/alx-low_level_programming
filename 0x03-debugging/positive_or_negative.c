#include "main.h"

/**
 * positive_or_negative - checks for positive or nagative numbers
 *
 * @i: the parameter
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is nagative\n", i);
	else
		printf("%d is positive\n", i);
}
