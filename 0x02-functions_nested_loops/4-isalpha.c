#include "main.h"

/**
 * _isalpha- a function that checks for alphabetic characters
 *
 * @c: A parameter to be checked
 *
 * Return: Return 1 if c is a letter and lower or uppercare
 * and 0 otherwise
 */


int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
