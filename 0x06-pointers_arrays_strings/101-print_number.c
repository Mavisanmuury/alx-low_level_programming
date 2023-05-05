#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n 1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n 1 = -n;
	}

	if (n 1 / 10 != 0)
	{
		print_number(n 1 / 10);
	}

	_putchar(n 1 % 10) + '0');
}
