#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_times_table(i / 10);
	}
	_putchar(i % 10 + '0');
}
