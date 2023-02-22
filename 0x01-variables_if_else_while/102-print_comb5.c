#include <stdio.h>

/**
 * main - main fucntion
 *
 * Return: Return 0 if true
 */

int main(void)
{
	int i;
	int j;
	int u;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (u = 0 ; u < 10 ; u++)
			{
				for (k = 1 ; k < 10 ; k++)
				{
					if (u < k && u != k)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(u + '0');
						putchar(k + '0');
						if (u + k != 18)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
