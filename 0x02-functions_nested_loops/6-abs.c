#include "main.h"

/**
 *_abs - Check Main
 * @a: An integre input
 *
 * Return: Absolut value of number a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
