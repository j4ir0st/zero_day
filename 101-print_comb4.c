#include "main.h"

/**
 * main - imput
 * return: 0
 */

int main(void)
{
	int u = 50, d = 49, c = 48;

	while (c < 56)
	{
		while (d < 57)
		{
			while (u < 58)
			{
				_putchar(c);
				_putchar(d);
				_putchar(u);
				if(c <= 54)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('\n');
				}
				u++;
			}
			d++;
			u = d + 1;
		}
		c++;
		d = c + 1;
	}
	return (0);
}
