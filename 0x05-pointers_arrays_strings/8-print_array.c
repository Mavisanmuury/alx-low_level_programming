#include "main.h"

/**
 * print_array - a function that prints n elements of a array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a nd n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			print("%d", a[n - 1]);
		}
			printf("\n");
}
