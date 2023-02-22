#include <stdio.h>

/**
 * main - main function
 *
 * Return: Return 0 if true
 */

int main(void)
{
	int i;
	int j;
	int u;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (u = 2 ; u < 10 ; u++)
			{
				if ((i < j && j < u) && (i != j && j != u))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(u + '0');

					if (i + j + u != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
