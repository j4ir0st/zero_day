#include <stdio.h>

/**
 * main - imput
 * Return: returns 0
 */

int main(void)
{
	char a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
